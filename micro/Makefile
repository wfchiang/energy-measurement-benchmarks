

CXX=arm-linux-gnueabihf-g++
CXXFLAGS=-O0 -mfpu=neon -D__USE_MEMCPY 


all: horner micro-2d-stencil 


bal-reduction: bal-reduction-all-32 bal-reduction-mix bal-reduction-all-64 

bal-reduction-all-32: bal-reduction-all-32.cpp 

bal-reduction-mix:    bal-reduction-mix.cpp 

bal-reduction-all-64: bal-reduction-all-64.cpp 



micro-2d-stencil: micro-2d-stencil-all32 micro-2d-stencil-mix1 micro-2d-stencil-mix2 micro-2d-stencil-all64 

micro-2d-stencil-all32: micro-2d-stencil-all32.cpp 

micro-2d-stencil-mix1:  micro-2d-stencil-mix1.cpp 

micro-2d-stencil-mix2:  micro-2d-stencil-mix2.cpp 

micro-2d-stencil-all64: micro-2d-stencil-all64.cpp 



horner: horner-all32 horner-adapt horner-all64 

horner-all32: horner-all32.cpp 

horner-adapt: horner-adapt.cpp 

horner-all64: horner-all64.cpp 



gaussian-ave-dev: gaussian-ave-dev-all32 gaussian-ave-dev-adapt gaussian-ave-dev-all64 

gaussian-ave-dev-all32: gaussian-ave-dev-all32.cpp 

gaussian-ave-dev-adapt: gaussian-ave-dev-adapt.cpp 

gaussian-ave-dev-all64: gaussian-ave-dev-all64.cpp 



gaussian-x-dev: gaussian-x-dev-all32 gaussian-x-dev-adapt gaussian-x-dev-all64 

gaussian-x-dev-all32: gaussian-x-dev-all32.cpp 

gaussian-x-dev-adapt: gaussian-x-dev-adapt.cpp 

gaussian-x-dev-all64: gaussian-x-dev-all64.cpp 



gaussian-x-ave: gaussian-x-ave-all32 gaussian-x-ave-adapt gaussian-x-ave-all64 

gaussian-x-ave-all32: gaussian-x-ave-all32.cpp 

gaussian-x-ave-adapt: gaussian-x-ave-adapt.cpp 

gaussian-x-ave-all64: gaussian-x-ave-all64.cpp 


clean: 
	-rm *~

	-rm bal-reduction-all-32
	-rm bal-reduction-mix 
	-rm bal-reduction-all-64

	-rm micro-2d-stencil-all32 
	-rm micro-2d-stencil-mix1
	-rm micro-2d-stencil-mix2 
	-rm micro-2d-stencil-all64 

	-rm horner-all32 
	-rm horner-adapt
	-rm horner-all64 

	-rm gaussian-ave-dev-all32
	-rm gaussian-ave-dev-adapt 
	-rm gaussian-ave-dev-all64 

	-rm gaussian-x-dev-all32 
	-rm gaussian-x-dev-adapt 
	-rm gaussian-x-dev-all64 

	-rm gaussian-x-ave-all32
	-rm gaussian-x-ave-adapt 
	-rm gaussian-x-ave-all64
