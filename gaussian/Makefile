
CC=g++
all: gaussian-fixed-x-all-32 gaussian-fixed-x-adaptive gaussian-fixed-x-all-64 


gaussian-fixed-x-all-32: gaussian-fixed-x-all-32.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-all-32 gaussian-fixed-x-all-32.cpp 

gaussian-fixed-x-adaptive: gaussian-fixed-x-adaptive.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-adaptive gaussian-fixed-x-adaptive.cpp

gaussian-fixed-x-all-64: gaussian-fixed-x-all-64.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-all-64 gaussian-fixed-x-all-64.cpp 


clean: 
	-rm *~

	-rm gaussian-fixed-x-all-32 
	-rm gaussian-fixed-x-adaptive 
	-rm gaussian-fixed-x-all-64 