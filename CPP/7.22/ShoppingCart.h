#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "ItemToPurchase.h"
#include <string>
#include <vector>
using namespace std;

class ShoppingCart {
    public:
        ShoppingCart();
        ShoppingCart(string userCustomerName, string userShoppingDate);
        string GetCustomerName();
        string GetDate();
        void AddItem(ItemToPurchase item);
        void RemoveItem(string itemName);
        void ModifyItem(ItemToPurchase item);
        int GetNumItemsInCart();
        int GetCostOfCart();
        void PrintTotal();
        void PrintDescription();

    private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;
};

#endif