.PHONY: all clean

all: app.out

app.out: main.o homogeneous.o
		g++ -o app homogeneous.o main.o

main.o: main.cpp homogeneous.h
		g++ -c main.cpp

homogeneous.o: homogeneous.h homogeneous.cpp
		g++ -c homogeneous.cpp

clean:
		rm -f *.o *.out *~ *.ghc
