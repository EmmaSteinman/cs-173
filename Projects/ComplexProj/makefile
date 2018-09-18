all: main

main: main.o Complex.o
	g++ -std=c++11 -Wall -o main main.o Complex.o

main.o: main.cpp Complex.h
	g++ -std=c++11 -Wall -c main.cpp

Complex.o: Complex.cpp Complex.h
	g++ -std=c++11 -Wall -c Complex.cpp

