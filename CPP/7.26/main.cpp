#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main(int argc, char* argv[]) {
   FoodItem FoodItem1;

   string itemName;
   double amountFat, amountCarbs, amountProtein;

   cin >> itemName;
   cin >> amountFat;
   cin >> amountCarbs;
   cin >> amountProtein;

   FoodItem FoodItem2 = FoodItem(itemName, amountFat, amountCarbs, amountProtein);

   double numServings;
   cin >> numServings;

   FoodItem1.PrintInfo();
   cout << fixed << setprecision(2);
   cout << "Number of calories for " << numServings << " serving(s): " << FoodItem1.GetCalories(numServings) << endl;
   cout << endl << endl;

   FoodItem2.PrintInfo();
   cout << "Number of calories for " << numServings << " serving(s): " << FoodItem2.GetCalories(numServings) << endl;

   return 0;
}