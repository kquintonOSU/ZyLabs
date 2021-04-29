output: main.o ItemToPurchase.o ShoppingCart.o
	g++ main.o ItemToPurchase.o ShoppingCart.o -o output

main.o: main.cpp
	g++ -c main.cpp

ItemToPurchase.o: ItemToPurchase.cpp ItemToPurchase.h
	g++ -c ItemToPurchase.cpp

ShoppingCart.o: ShoppingCart.cpp ShoppingCart.h
	g++ -c ShoppingCart.cpp

clean:
	rm *.o output
