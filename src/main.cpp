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

  index = hashObj.Hash("EvanM");
  cout << "index = " << index << endl;
  return 0;
}
