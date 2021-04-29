output: main.o Team.o
	g++ main.o Team.o -o output

main.o: main.cpp
	g++ -c main.cpp

Team.o: Team.cpp Team.h
	g++ -c Team.cpp

clean:
	rm *.o output
