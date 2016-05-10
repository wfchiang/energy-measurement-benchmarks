#pragma once

#include <ctime> 
#include <string> 
#include <string.h> 
#include <stdlib.h> 
#include <sys/socket.h> 
#include <sys/types.h> 
#include <resolv.h> 
#include <arpa/inet.h> 
#include <errno.h> 
#include <assert.h> 


using namespace std; 

#define PORT_FTP 20228
#define SERVER_ADDR "155.98.68.68" 
#define MAXBUF 256

int connect_server(std::string address, int port) {
  int sockfd, n, portno;
  struct sockaddr_in dest;
  struct hostent *server;
  size_t len;

  /* -- create and open socket for streaming -- */
  if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) <0) {
    perror("Socket");
    exit(errno);
  }

  /* -- initialize server address/ port struct -- */
  bzero(&dest, sizeof(dest));
  dest.sin_family = AF_INET; /* -- IP4 address family -- */
  dest.sin_port = htons(port);
  if (inet_aton(address.c_str(), &dest.sin_addr) == 0) {
    perror(address.c_str());
    exit(errno);
  }
  /* -- connect to the server -- */
  if (connect(sockfd, (struct sockaddr*)&dest, sizeof(dest)) != 0) {
    perror("Connect Error");
    exit(errno);
  }

  return sockfd;
}

int send_command(int sockfd, std::string command) {
  char buffer[MAXBUF] = {0, };

  assert(command.size() < MAXBUF);
  bzero(buffer, MAXBUF);
  sprintf(buffer, "%s", command.c_str());
  int n = write(sockfd, buffer, command.size());
  if(n < 0)
    printf("Error writing to socket\n");
  return n;
}

int start_emeasure (std::string log_name) {
  int sockfd = connect_server(SERVER_ADDR, PORT_FTP); 

  sleep(2); 
	
  send_command(sockfd, string("start") + log_name); 

  sleep(2); 

  return sockfd; 
}

void stop_emeasure (int sockfd) {
  send_command(sockfd, "stop"); 

  sleep(2); 
	
  shutdown(sockfd, SHUT_WR); 

  sleep(2); 
}
