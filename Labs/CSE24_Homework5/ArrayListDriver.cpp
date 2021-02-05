#include <iostream>
#include "ArrayList.h"
#include "memory_stuff.h"

using namespace std;

int main()
{
  ArrayList myArray;
  cout << myArray << endl;
  cout << "Capacity: " << myArray.cap() << endl;
  cout << "Length: " << myArray.length() << endl;

  myArray.append(5);

  cout << endl << myArray << endl;
  cout << "Capacity: " << myArray.cap() << endl;
  cout << "Length: " << myArray.length() << endl;

  myArray.append(7);

  cout << endl << myArray << endl;
  cout << "Capacity: " << myArray.cap() << endl;
  cout << "Length: " << myArray.length() << endl;

  myArray.append(4);

  cout << endl << myArray << endl;
  cout << "Capacity: " << myArray.cap() << endl;
  cout << "Length: " << myArray.length() << endl;

  return 0;
}
