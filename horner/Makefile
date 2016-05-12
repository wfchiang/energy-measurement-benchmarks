
CC=g++ 

all: horner-all-32 horner-adaptive horner-all-64 


horner-all-32: horner-all-32.cpp 
	$(CC) -I../include -O0 -o horner-all-32 horner-all-32.cpp 

horner-adaptive: horner-adaptive.cpp 
	$(CC) -I../include -O0 -o horner-adaptive horner-adaptive.cpp 

horner-all-64: horner-all-64.cpp 
	$(CC) -I../include -O0 -o horner-all-64 horner-all-64.cpp 


clean: 
	-rm *~ 

	-rm horner-all-32 
	-rm horner-adaptive 
	-rm horner-all-64 