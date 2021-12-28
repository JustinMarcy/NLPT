ifeq ($(OS),Windows_NT) 
RM = del /Q /F
CP = copy /Y
ifdef ComSpec
SHELL := $(ComSpec)
endif
ifdef COMSPEC
SHELL := $(COMSPEC)
endif
else
RM = rm -rf
CP = cp -f
endif
INC = -I "include/"
OPT = -Wpedantic
ASAN_FLAGS = -fsanitize=address

all: app.out

app.out: main.o homogeneous.o order.o
		g++ -o app homogeneous.o main.o order.o

main.o: main.cpp
		g++ -c $(OPT) $(INC) main.cpp

homogeneous.o: homogeneous.cpp
		g++ -c $(OPT) $(INC) homogeneous.cpp

order.o: order.cpp 
		g++ -c $(OPT) $(INC) order.cpp 
clean:
		$(RM) *.o *.out *~ *.ghc *.exe

.PHONY: all clean