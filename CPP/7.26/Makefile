output: main.o FoodItem.o
	g++ main.o FoodItem.o -o output

main.o: main.cpp
	g++ -c main.cpp

FoodItem.o: FoodItem.cpp FoodItem.h
	g++ -c FoodItem.cpp

clean:
	rm *.o output
