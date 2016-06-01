
CC=g++


all: p-in-circle-all-32 p-in-circle-1e-04 p-in-circle-5e-05 p-in-circle-all-64 


p-in-circle-all-32: p-in-circle.cpp 
	$(CC) -o p-in-circle-all-32 -DF0=float -DF1=float -DF2=float -DF3=float -DF4=float -DF5=float -DF6=float -DF7=float -DF8=float -DF9=float -DF10=float -DF11=float -DF12=float -DF13=float p-in-circle.cpp


p-in-circle-1e-04: p-in-circle.cpp 
	$(CC) -o p-in-circle-1e-04 -DF0=float -DF1=float -DF2=float -DF3=float -DF4=double -DF5=float -DF6=float -DF7=float -DF8=double -DF9=float -DF10=double -DF11=float -DF12=float -DF13=double p-in-circle.cpp


p-in-circle-5e-05: p-in-circle.cpp 
	$(CC) -o p-in-circle-5e-05 -DF0=float -DF1=double -DF2=double -DF3=float -DF4=double -DF5=double -DF6=float -DF7=double -DF8=double -DF9=double -DF10=double -DF11=double -DF12=double -DF13=double p-in-circle.cpp


p-in-circle-all-64: p-in-circle.cpp 
	$(CC) -o p-in-circle-all-64 -DF0=double -DF1=double -DF2=double -DF3=double -DF4=double -DF5=double -DF6=double -DF7=double -DF8=double -DF9=double -DF10=double -DF11=double -DF12=double -DF13=double p-in-circle.cpp


clean: 
	-rm *~
	-rm p-in-circle-all-32
	-rm p-in-circle-1e-04 
	-rm p-in-circle-5e-05 
	-rm p-in-circle-all-64 