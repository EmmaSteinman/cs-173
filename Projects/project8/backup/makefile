main: testMain1.o List.o
	g++ -std=c++11 -Wall -o main testMain1.o List.o

testMain1.o: testMain1.cpp List.h
	g++ -std=c++11 -Wall -c testMain1.cpp

List.o: List.cc List.h
	g++ -std=c++11 -Wall -c List.cc

