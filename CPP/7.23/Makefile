output: main.o Triangle.o
	g++ main.o Triangle.o -o output

main.o: main.cpp
	g++ -c main.cpp

Triangle.o: Triangle.cpp Triangle.h
	g++ -c Triangle.cpp

clean:
	rm *.o output
