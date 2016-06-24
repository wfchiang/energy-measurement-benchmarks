
all: all-32 mixed-1e-04 mixed-5e-05 all-64 

all-32: all-32.cpp
	g++ -std=c++0x -I../include -o all-32 all-32.cpp 

mixed-1e-04: mixed-1e-04 
	g++ -std=c++0x -I../include -o mixed-1e-04 mixed-1e-04.cpp 

mixed-5e-05: mixed-5e-05 
	g++ -std=c++0x -I../include -o mixed-5e-05 mixed-5e-05.cpp 

all-64: all-64.cpp 
	g++ -std=c++0x -I../include -o all-64 all-64.cpp 

clean: 
	-rm *~
	-rm all-32 
	-rm mixed-1e-04
	-rm mixed-5e-05
	-rm all-64 