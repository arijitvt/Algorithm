CC=g++
TARGET=output

all: main.o
	$(CC) main.o -o $(TARGET)
main.o:main.cc
	$(CC) -g -c main.cc -I /home/arijit/Downloads/boost_1_52_0 

clean:
	rm -rf *.o

