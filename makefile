lab1: lab1.o list.o
	g++ -g -std=c++11 lab1.o list.o -o lab1

lab1.o: lab1.cpp list.o
	g++ -c -g -std=c++11 lab1.cpp

list.o: list.cpp 
	g++ -c -g -std=c++11 list.cpp

clean:
	rm -f *~ *.o
