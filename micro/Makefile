
CXX=arm-linux-gnueabihf-g++
CXXFLAGS=-O0 -mfpu=neon -D__USE_MEMCPY 

all: bal-reduction-all-32 bal-reduction-mix bal-reduction-all-64 micro-2d-stencil-all32 micro-2d-stencil-mix1 micro-2d-stencil-mix2 micro-2d-stencil-all64 horner-all32 horner-adapt horner-all64 



bal-reduction-all-32: bal-reduction-all-32.cpp 

bal-reduction-mix:    bal-reduction-mix.cpp 

bal-reduction-all-64: bal-reduction-all-64.cpp 


micro-2d-stencil-all32: micro-2d-stencil-all32.cpp 

micro-2d-stencil-mix1:  micro-2d-stencil-mix1.cpp 

micro-2d-stencil-mix2:  micro-2d-stencil-mix2.cpp 

micro-2d-stencil-all64: micro-2d-stencil-all64.cpp 


horner-all32: horner-all32.cpp 

horner-adapt: horner-adapt.cpp 

horner-all64: horner-all64.cpp 


clean: 
	-rm *~

	-rm bal-reduction-all-32
	-rm bal-reduction-mix 
	-rm bal-reduction-all-64

	-rm micro-2d-stencil-all32 
	-rm micro-2d-stencil-mix1
	-rm micro-2d-stencil-mix2 
	-rm micro-2d-stencil-all64 

	-rm horner-all64 