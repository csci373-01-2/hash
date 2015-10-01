// Copyright 2015 Evan Misshula

#include <cstdlib>
#include <iostream>
#include <string>

#include "../my_inc/hash.h"

int main(int argc, char *argv[]) {
  hash hashObj;
  int index;
  using std::cout;
  using std::endl;

  hash myHash;

  myHash.AddItem("Paul", "Locha");
  myHash.AddItem("Kim ", "Iced Mocha");
  myHash.AddItem("Emma", "Strawberry Smoothy");
  myHash.AddItem("Annie", "Hot Chocolate");
  myHash.AddItem("Sarah", "Passion Tea");
  myHash.AddItem("Pepper", "Caramel Mocha");
  myHash.AddItem("Mike", "Chai Tea");
  myHash.AddItem("Steve", "Apple Cider");
  myHash.AddItem("Bill", "Root Beer");
  myHash.AddItem("Marie", "Skinny Latte");
  myHash.AddItem("Susan", "Water");
  myHash.AddItem("Joe", "Green Tea");
  myHash.PrintItemsInIndex(0);
  return 0;
}
