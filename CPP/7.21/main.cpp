#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   /* Type your code here */
   ItemToPurchase Item1;
   ItemToPurchase Item2;
   
   string itemName, tempStr;
   int itemPrice, itemQuantity;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity;
   getline(cin, tempStr);
   cout << endl;
   
   Item1.SetName(itemName);
   Item1.SetPrice(itemPrice);
   Item1.SetQuantity(itemQuantity);
   
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity;
   getline(cin, tempStr);
   cout << endl;
   
   Item2.SetName(itemName);
   Item2.SetPrice(itemPrice);
   Item2.SetQuantity(itemQuantity);
   
   cout<<"TOTAL COST"<<endl;
   cout << Item1.GetName() << " " << Item1.GetQuantity() << " @ $" << Item1.GetPrice() << " = $" << (Item1.GetQuantity() * Item1.GetPrice()) << endl;
   cout << Item2.GetName() << " " << Item2.GetQuantity() << " @ $" << Item2.GetPrice() << " = $" << (Item2.GetQuantity() * Item2.GetPrice()) << endl;
   cout << endl;
   cout << "Total: $" << ((Item1.GetQuantity() * Item1.GetPrice()) + (Item2.GetQuantity() * Item2.GetPrice())) << endl;
   
   
   return 0;
}