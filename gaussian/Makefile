
CC=g++
all: gaussian-fixed-x-adaptive gaussian-fixed-ave-adaptive gaussian-fixed-dev-adaptive gaussian-allvars-adaptive 


gaussian-fixed-x-adaptive: gaussian-fixed-x-adaptive.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-x-adaptive gaussian-fixed-x-adaptive.cpp


gaussian-fixed-ave-adaptive: gaussian-fixed-ave-adaptive.cpp
	$(CC) -I../include -O0 -o gaussian-fixed-ave-adaptive gaussian-fixed-ave-adaptive.cpp 


gaussian-fixed-dev-adaptive: gaussian-fixed-dev-adaptive.cpp 
	$(CC) -I../include -O0 -o gaussian-fixed-dev-adaptive gaussian-fixed-dev-adaptive.cpp 


gaussian-allvars-adaptive: gaussian-allvars-adaptive.cpp 
	$(CC) -I../include -O0 -o gaussian-allvars-adaptive gaussian-allvars-adaptive.cpp 



clean: 
	-rm *~

	-rm gaussian-fixed-x-adaptive 

	-rm gaussian-fixed-ave-adaptive 

	-rm gaussian-fixed-dev-adaptive 

	-rm gaussian-allvars-adaptive


