output: main.o Car.o
	g++ main.cpp Car.cpp -o output

main.o: main.cpp
	g++ -c main.cpp

Car.o: Car.cpp Car.h
	g++ -c Car.cpp

clean:
	rm *.o output

