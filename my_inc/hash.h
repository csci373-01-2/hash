// Copyright 2015 Evan Misshula

#include <cstdlib>
#include <iostream>
#include <string>

#ifndef MY_INC_HASH_H_
using std::string;
#define MY_INC_HASH_H_

class hash {
 private:
  static const int tableSize = 10;
  struct item {
    string name;
    string drink;
    item* next;
  };
  item* HashTable[tableSize];
 public:
  hash();
  int Hash(string key);
  void AddItem(string name, string drink);
  int NumberOfItemsInIndex(int index);
  void PrintTable();
  void PrintItemsInIndex(int index);
};

#endif  // MY_INC_HASH_H_
