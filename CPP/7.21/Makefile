output: main.o message.o
	g++ main.o ItemToPurchase.o -o output

main.o: main.cpp
	g++ -c main.cpp

message.o: ItemToPurchase.cpp ItemToPurchase.h
	g++ -c ItemToPurchase.cpp

clean:
	rm *.o output
