CC := g++ -std=c++11

all: 2.out

2.out: main.o file_system_interface.o file_system.o directory.o link.o file.o exception.o
	$(CC) main.o file_system_interface.o file_system.o directory.o link.o file.o exception.o -o 2.out

main.o: main.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c main.cpp 

file_system_interface.o: file_system_interface.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c file_system_interface.cpp

file_system.o: file_system.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c file_system.cpp

directory.o: directory.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c directory.cpp

link.o: link.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c link.cpp

file.o: file.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c file.cpp

exception.o: exception.cpp file_system_interface.h file_system.h directory.h link.h file.h exception.h
	$(CC) -c exception.cpp

.PHONY: clean
clean:
	rm -r *.o