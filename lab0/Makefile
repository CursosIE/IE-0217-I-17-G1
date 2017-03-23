CC=g++
IDIR=./include
SDIR=./src
CFLAGS=-I $(IDIR)
FILES = $(SDIR)/matrix.cpp $(SDIR)/functions.cpp
OUT_EXE = matrix
#g++     functions.cpp   -o functions -I ../include
all: build

build:
	$(CC) $(FILES) -o $(OUT_EXE) $(CFLAGS)	
run:
	./matrix
clean:
	rm -f *.o
