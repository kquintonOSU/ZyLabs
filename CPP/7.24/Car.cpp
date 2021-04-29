#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int price) {
   purchasePrice = price;
}

// TODO: Implement GetPurchasePrice() function
int Car::GetPurchasePrice() {
   return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = (int) 
      round(purchasePrice * pow((1 - depreciationRate), carAge));
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and 
// currentValue
void Car::PrintInfo() {
   printf("Car's information:\n");
   printf("   Model year: %d\n", GetModelYear());
   printf("   Purchase price: %d\n", GetPurchasePrice());
   printf("   Current value: %d\n", currentValue);
}