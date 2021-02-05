#include "Stash.h"
#include <iostream>
using namespace std;

int main()
{
  Stash t;
  t.append(99);
  t.append('x');
  t.append(73);
  t.append("Hello");

  cout << t << endl;

  Stash s;
  s.append(5);
  s.append(7);
  s.append('A');
  s.append(1);
  s.append(t);
  s.append(9);
  s.append("World");

  cout << s << endl;

  return 0;
}