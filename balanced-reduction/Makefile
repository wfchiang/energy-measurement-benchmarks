

CC = g++ 


all: bal-reduction-all-32 bal-reduction-mixed-32-64 bal-reduction-all-64 bal-reduction-mixed-2e-13 bal-reduction-mixed-1e-13 bal-reduction-all-128 empty-32 empty-64


bal-reduction-all-32:  bal-reduction-all-32.cpp 
	$(CC) -I../include -o bal-reduction-all-32 bal-reduction-all-32.cpp 


bal-reduction-mixed-32-64:   bal-reduction-mixed-32-64.cpp 
	$(CC) -I../include -o bal-reduction-mixed-32-64  bal-reduction-mixed-32-64.cpp 


bal-reduction-all-64:  bal-reduction-all-64.cpp
	$(CC) -I../include -o bal-reduction-all-64 bal-reduction-all-64.cpp  


bal-reduction-mixed-2e-13:   bal-reduction-mixed-2e-13.cpp 
	$(CC) -I../include -o bal-reduction-mixed-2e-13  bal-reduction-mixed-2e-13.cpp 


bal-reduction-mixed-1e-13:   bal-reduction-mixed-1e-13.cpp 
	$(CC) -I../include -o bal-reduction-mixed-1e-13  bal-reduction-mixed-1e-13.cpp 


bal-reduction-all-128:  bal-reduction-all-128.cpp
	$(CC) -I../include -o bal-reduction-all-128 bal-reduction-all-128.cpp -lquadmath  


empty-32: empty-32.cpp 
	$(CC) -I../include -o empty-32 empty-32.cpp 


empty-64: empty-64.cpp 
	$(CC) -I../include -o empty-64 empty-64.cpp 


clean: 
	-rm *~
	-rm bal-reduction-all-32 
	-rm bal-reduction-mixed-32-64
	-rm bal-reduction-all-64 
	-rm bal-reduction-mixed-2e-13
	-rm bal-reduction-mixed-1e-13
	-rm bal-reduction-all-128 
	-rm empty-32 
	-rm empty-64 