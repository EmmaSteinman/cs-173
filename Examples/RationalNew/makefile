all: main

main: main.o Rational.o
	g++ -std=c++11 -Wall -o main main.o Rational.o

main.o: main.cpp Rational.h
	g++ -std=c++11 -Wall -c main.cpp

Rational.o: Rational.cpp Rational.h
	g++ -std=c++11 -Wall -c Rational.cpp

