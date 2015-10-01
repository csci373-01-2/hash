// Copyright 2015 Evan Misshula

#include <cstdlib>
#include <iostream>
#include <string>

#include "../my_inc/hash.h"

hash::hash() {
  for ( int i=0 ; i < tableSize; i++ ) {
    HashTable[i] = new item;
    HashTable[i]->name = "def_name";
    HashTable[i]->drink = "def_drink";
    HashTable[i]->next = NULL;
  }
}

void hash::AddItem(string name, string drink) {
  int index = Hash(name);
  if ( HashTable[index]->name == "def_name" ) {
    HashTable[index]->name = name;
    HashTable[index]->drink = drink;
  } else {
    item* ptr = HashTable[index];
    item* newPtr = new item;
    newPtr->name = name;
    newPtr->drink = drink;
    newPtr->next = NULL;
    while (ptr->next != NULL) {
      ptr = ptr-> next;
    }
    ptr->next = newPtr;
  }
}

int hash::NumberOfItemsInIndex(int index) {
  int count = 0;
  if (HashTable[index]->name == "def_name") {
    return count;
  } else {
    count++;
    item* Ptr = HashTable[index];
    while ( Ptr->next != NULL ) {
      count++;
      Ptr = Ptr->next;
    }
  }
  return count;
}
void hash::PrintTable() {
  using std::cout;
  using std::endl;
  int number = 0;
  for (int i = 0; i < tableSize; i++) {
    number = NumberOfItemsInIndex(i);
    cout << "----------------------\n";
    cout << "index = " << i << endl;
    cout << HashTable[i]->name << endl;
    cout << HashTable[i]->drink << endl;
    cout << "# of items = " << number << endl;
    cout << "----------------------\n";
  }
}
int hash::Hash(string key) {
  int hash = 0;
  int index = 0;
  using std::cout;
  using std::endl;

  for ( int i = 0; i < key.length(); i++ ) {
    hash += static_cast<int> (key[i]);
  }
  index = hash % tableSize;
  return index;
}
void hash::PrintItemsInIndex(int index) {
  item* Ptr = HashTable[index];
  using std::cout;
  using std::endl;

  if (Ptr->name == "def_name") {
    cout << "index = " << index << " is empty" << endl;
  } else {
    cout << "index = " << index
         << " contains the following items" << endl;
    while ( Ptr != NULL ) {
      cout << "---------------------------\n";
      cout << Ptr->name << endl;
      cout << Ptr->drink << endl;
      cout << "---------------------------\n";
      Ptr = Ptr->next;
    }
  }
}
