#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear=userYear;
}

int Car::GetModelYear() const{
   return modelYear;
}


void Car::SetPurchasePrice(int userPrice){
   purchasePrice = userPrice;
}


int Car::GetPurchasePrice() const{
   return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear){
   double depreciationRate = 0.15;
   int carAge = currentYear- modelYear;
   currentValue = (int)round(purchasePrice*pow((1-depreciationRate),carAge));

}

void Car::PrintInfo(){
   cout<<"Car's information:\n";
   cout<<"   Model year: "<<GetModelYear();
   cout<<"\n   Purchase price: "<<GetPurchasePrice();
   cout<<"\n   Current value: "<<currentValue<<endl;
}