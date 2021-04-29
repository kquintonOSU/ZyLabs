#include <iostream>
#include "ShoppingCart.h"
using namespace std;

#include <iostream>
#include <string>
#include <vector>

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string userCustomerName, string userShoppingDate) {
    customerName = userCustomerName;
    currentDate = userShoppingDate;
}

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDate() {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName) {
    for (int i = 0; i < cartItems.size(); i++) {
        if (cartItems.at(i).GetName() == itemName) {
            cartItems.erase(cartItems.begin() + i);         
        }
        else {
            cout << "Item not found in cart. Nothing removed." << endl;
        }
    } 
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    for (int i = 0; i < cartItems.size(); i++) {
        if (cartItems.at(i).GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                cartItems.at(i).SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItems.at(i).SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItems.at(i).SetQuantity(item.GetQuantity());
            }
        }
        else {
            cout << "Item not found in cart. Nothing modified." << endl;
        }
    }
}

int ShoppingCart::GetNumItemsInCart() {
    int totalItemsInCart = 0;
    for (int i = 0; i < cartItems.size(); i++) {
        totalItemsInCart = totalItemsInCart + cartItems.at(i).GetQuantity();
    }
    return totalItemsInCart;
}

int ShoppingCart::GetCostOfCart() {
    int totalCostInCart;
    for (int i = 0; i < cartItems.size(); i++) {
        totalCostInCart = totalCostInCart + cartItems.at(i).GetPrice();
    }
    return totalCostInCart;
}
void ShoppingCart::PrintTotal() {
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else {
        printf("%s's Shopping Cart - %s\n", customerName.c_str(), currentDate.c_str());
        printf("Number of Items: %d\n", GetNumItemsInCart());
        cout << endl;
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems.at(i).PrintItemCost();
        }
        cout << endl;
        printf("Total: $%d\n", GetCostOfCart());
    }
}
void ShoppingCart::PrintDescription() {
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else {
        printf("%s's Shopping Cart - %s\n\n", customerName.c_str(), currentDate.c_str());
        printf("Item Descriptions\n");
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems.at(i).PrintItemDescription();
        }
    }
}