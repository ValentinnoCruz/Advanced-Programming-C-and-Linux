#include "memory_stuff.h"

#include <iostream>
using namespace std;

int main()
{
  memory_contents(5);
  memory_contents(2021);

  cout << build_integer(5, 0, 0, 0) << endl;
  cout << build_integer(1, 2, 3, 4) << endl;
}