# Specify directories and target
SDIR = src
ODIR = build/bin
INC = -I "/include/"
TARGET = $(ODIR)/NLPT.exe

# Determine OS, set commands accordingly
ifeq ($(OS),Windows_NT) 
RM = del build\bin\*.o* build\bin\*.exe*
CP = copy /Y
ifdef ComSpec
SHELL := $(ComSpec)
endif
ifdef COMSPEC
SHELL := $(COMSPEC)
endif
else
RM = rm -rf $(ODIR)/*.o $(ODIR)/*.out 
CP = cp -f
endif

# Specify compiler options
CFLAGS = -Wpedantic
ASAN_FLAGS = -fsanitize=address

# Specify Dependancies
_OBJS = main.o homogeneous.o order.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

all: $(TARGET)
	@echo "======== FINISHED BUILDING ========="

$(TARGET): $(OBJS)
	@echo "===================================="
	@echo "GENERATING EXECUTABLE $(TARGET)"
	g++ -o $(TARGET) $^
	
$(ODIR)/%.o: $(SDIR)/%.cpp 
	g++ -c $(CFLAGS) $(INC) $< -o $@ 
	
clean:
	$(RM)

.PHONY: all clean