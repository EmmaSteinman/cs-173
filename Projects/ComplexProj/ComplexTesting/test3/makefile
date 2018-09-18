all: main1 main2

main1: main1.o Complex.o
	g++ -std=c++11 -Wall -o main1 main1.o Complex.o

main2: main2.o Complex.o
	g++ -std=c++11 -Wall -o main2 main2.o Complex.o

main3: main3.o Complex.o
	g++ -std=c++11 -Wall -o main3 main3.o Complex.o

main4: main24.o Complex.o
	g++ -std=c++11 -Wall -o main4 main4.o Complex.o

main1.o: main1.cpp Complex.h
	g++ -std=c++11 -Wall -c main1.cpp

main2.o: main2.cpp Complex.h
	g++ -std=c++11 -Wall -c main2.cpp

main3.o: main3.cpp Complex.h
	g++ -std=c++11 -Wall -c main3.cpp

main4.o: main4.cpp Complex.h
	g++ -std=c++11 -Wall -c main4.cpp

Complex.o: Complex.cpp Complex.h
	g++ -std=c++11 -Wall -c Complex.cpp
