

CC = g++ 


all: bal-reduction-all-32 bal-reduction-mixed bal-reduction-all-64 


bal-reduction-all-32:  bal-reduction-all-32.cpp 
	$(CC) -I../include -o bal-reduction-all-32 bal-reduction-all-32.cpp 


bal-reduction-mixed:   bal-reduction-mixed.cpp 
	$(CC) -I../include -o bal-reduction-mixed  bal-reduction-mixed.cpp 


bal-reduction-all-64:  bal-reduction-all-64.cpp
	$(CC) -I../include -o bal-reduction-all-64 bal-reduction-all-64.cpp  


clean: 
	-rm *~
	-rm bal-reduction-all-32 
	-rm bal-reduction-mixed 
	-rm bal-reduction-all-64 