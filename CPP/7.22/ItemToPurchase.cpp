#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase() {
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}
ItemToPurchase::ItemToPurchase(string userItemName, int userItemPrice, int userItemQuantity, string userItemDescription) {
   itemName = userItemName;
   itemPrice = userItemPrice;
   itemQuantity = userItemQuantity;
   itemDescription = "userItemDescription";
}

void ItemToPurchase::SetName(string userItemName) {
   itemName = userItemName;
}

void ItemToPurchase::SetPrice(int userItemPrice) {
   itemPrice = userItemPrice;
}

void ItemToPurchase::SetQuantity(int userItemQuantity) {
   itemQuantity = userItemQuantity;
}

void ItemToPurchase::SetDescription(string userItemDescription) {
   itemDescription = userItemDescription;
}

string ItemToPurchase::GetName() const {
   return itemName;
}

int ItemToPurchase::GetPrice() const {
   return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}

string ItemToPurchase::GetDescription() const {
   return itemDescription;
}

void ItemToPurchase::PrintItemCost() {
   cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice() << " = $" << (GetQuantity() * GetPrice()) << endl;
}

void ItemToPurchase::PrintItemDescription() {
   cout << GetName() << ": " << GetDescription() << endl;
}