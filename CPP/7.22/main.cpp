#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

void PrintMenu(ShoppingCart& cart);
void ExecuteMenu(char userInput, ShoppingCart& cart);


int main() {
   string userName, userDate;
   char userInput;

   cout << "Enter customer's name:" << endl;
   getline(cin, userName);
   cout << "Enter today's date:" << endl;
   getline(cin, userDate);
   cout << endl;

   ShoppingCart cart(userName, userDate);

   printf("Customer name: %s\n", cart.GetCustomerName().c_str());
   printf("Today's date: %s\n", cart.GetDate().c_str());
   cout << endl;

   PrintMenu(cart);

   cout << endl;
   cout << "Choose an option:" << endl;

   ExecuteMenu(userInput, cart);

   return 0;
}

void PrintMenu(ShoppingCart& cart) {

   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char userInput, ShoppingCart& cart) {
   string itemName, itemDescription;
   int itemPrice, itemQuantity;
   cin >> userInput;
   while (userInput != 'q') {
      if (userInput == 'a') {
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         getline(cin, itemName);
         cout << "Enter the item description:" << endl;
         getline(cin, itemDescription);
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;
         ItemToPurchase item(itemName, itemPrice, itemQuantity, itemDescription);
         cart.AddItem(item);
      }
      else if (userInput == 'd') {
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter name of item to remove:" << endl;
         getline(cin, itemName);
         cart.RemoveItem(itemName);
      }
      else if (userInput == 'c') {
         cout << "CHANGE ITEM QUANTITY" << endl;
         ItemToPurchase item;
         cout << "Enter the item name:" << endl;
         getline(cin, itemName);
         cout << "Enter the new quantity:" << endl;
         cin >> itemQuantity;
         item.SetName(itemName);
         item.SetQuantity(itemQuantity);
         cart.ModifyItem(item);
      }
      else if (userInput == 'i') {
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         cart.PrintDescription();
      }
      else if (userInput == 'o') {
         cout << "OUTPUT SHOPPING CART" << endl;
         cart.PrintTotal();
      }
      else if (userInput == 'q') {
      }
      else {
         cout << "Invalid option!" << endl;
      }
   }
}