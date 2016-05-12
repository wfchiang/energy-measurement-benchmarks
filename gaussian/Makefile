
CC=g++
all: gaussian-fixed-x-all-32 gaussian-fixed-x-adaptive gaussian-fixed-x-all-64 gaussian-fixed-ave-all-32 gaussian-fixed-ave-adaptive gaussian-fixed-ave-all-64 


gaussian-fixed-x-all-32: gaussian-fixed-x-all-32.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-all-32 gaussian-fixed-x-all-32.cpp 

gaussian-fixed-x-adaptive: gaussian-fixed-x-adaptive.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-adaptive gaussian-fixed-x-adaptive.cpp

gaussian-fixed-x-all-64: gaussian-fixed-x-all-64.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-all-64 gaussian-fixed-x-all-64.cpp


gaussian-fixed-ave-all-32: gaussian-fixed-ave-all-32.cpp
	$(CC) -I../include -O0 -o gaussian-fixed-ave-all-32 gaussian-fixed-ave-all-32.cpp

gaussian-fixed-ave-adaptive: gaussian-fixed-ave-adaptive.cpp
	$(CC) -I../include -O0 -o gaussian-fixed-ave-adaptive gaussian-fixed-ave-adaptive.cpp 

gaussian-fixed-ave-all-64: gaussian-fixed-ave-all-64.cpp
	$(CC) -I../include -O0 -o gaussian-fixed-ave-all-64 gaussian-fixed-ave-all-64.cpp 


clean: 
	-rm *~

	-rm gaussian-fixed-x-all-32 
	-rm gaussian-fixed-x-adaptive 
	-rm gaussian-fixed-x-all-64

	-rm gaussian-fixed-ave-all-32 
	-rm gaussian-fixed-ave-adaptive 
	-rm gaussian-fixed-ave-all-64 
