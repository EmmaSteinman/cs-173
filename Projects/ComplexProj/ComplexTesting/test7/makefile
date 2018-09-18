all: mainFormat

mainFormat: testMainFormat.o Complex.o
	g++ -std=c++11 -Wall -o mainFormat testMainFormat.o Complex.o

testMainFormat.o: testMainFormat.cpp Complex.h
	g++ -std=c++11 -Wall -c testMainFormat.cpp

Complex.o: Complex.cpp Complex.h
	g++ -std=c++11 -Wall -c Complex.cpp

