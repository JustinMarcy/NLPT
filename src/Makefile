.PHONY: all clean

all: app.out

app.out: main.o homogeneous.o order.o
		g++ -o app homogeneous.o main.o order.o

main.o: main.cpp homogeneous.h order.h
		g++ -c main.cpp

homogeneous.o: homogeneous.h homogeneous.cpp
		g++ -c homogeneous.cpp

order.o: order.h order.cpp 
		g++ -c order.cpp 
clean:
		rm -f *.o *.out *~ *.ghc
