
all: all-32 mixed-2e-06 mixed-1e-06 all-64 

all-32: all-32.cpp
	g++ -std=c++0x -I../include -o all-32 all-32.cpp 

mixed-2e-06: mixed-2e-06 
	g++ -std=c++0x -I../include -o mixed-2e-06 mixed-2e-06.cpp 

mixed-1e-06: mixed-1e-06 
	g++ -std=c++0x -I../include -o mixed-1e-06 mixed-1e-06.cpp 

all-64: all-64.cpp 
	g++ -std=c++0x -I../include -o all-64 all-64.cpp 

clean: 
	-rm *~
	-rm all-32 
	-rm mixed-2e-06
	-rm mixed-1e-06
	-rm all-64 