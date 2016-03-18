
CXX=arm-linux-gnueabihf-g++
CXXFLAGS=-O0 -mfpu=neon 

all: bal-reduction-all-32 bal-reduction-mix bal-reduction-all-64 

bal-reduction-all-32: bal-reduction-all-32.cpp 

bal-reduction-mix:    bal-reduction-mix.cpp 

bal-reduction-all-64: bal-reduction-all-64.cpp 

clean: 
	-rm *~

	-rm bal-reduction-all-32
	-rm bal-reduction-mix 
	-rm bal-reduction-all-64

