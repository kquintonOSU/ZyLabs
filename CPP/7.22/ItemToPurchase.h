#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase {
   public:
      ItemToPurchase();
      ItemToPurchase(string userItemName, int userItemPrice, int userItemQuantity, string userItemDescription);
      void SetName(string userItemName);
      void SetPrice(int userItemPrice);
      void SetQuantity(int userItemQuantity);
      void SetDescription(string userItemDescription);
      string GetName() const;
      int GetPrice() const;
      int GetQuantity() const;
      string GetDescription() const;
      void PrintItemCost();
      void PrintItemDescription();
   private:
      string itemName;
      int itemPrice;
      int itemQuantity;
      string itemDescription;
};

#endif