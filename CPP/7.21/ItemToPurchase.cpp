#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase() {
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
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

string ItemToPurchase::GetName() const {
   return itemName;
}

int ItemToPurchase::GetPrice() const {
   return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}