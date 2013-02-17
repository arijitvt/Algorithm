CC=g++
OBJ= main.o lit.o
TARGET= output

all: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

lit.o:lit.cc lit.hh
	$(CC) -g -c lit.cc

main.o:main.cc
	$(CC) -g -c main.cc

clean: 
	rm -rf *.o