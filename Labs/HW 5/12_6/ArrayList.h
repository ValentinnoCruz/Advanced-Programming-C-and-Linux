#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>

struct ArrayList
{
  int *data;
  int capacity;
  int count;

  ArrayList()
  {
    data = new int[1];
    capacity = 1;
    count = 0;
  }

  void append(int x)
  {
    data[count++] = x;

    if (count == capacity)
    {
      int *new_data = new int[capacity * 2];
      for (int i = 0; i < capacity; i++)
      {
        new_data[i] = data[i];
      }

      delete[] data;
      data = new_data;
      capacity = capacity * 2;
    }
  }

  int length()
  {
    return count;
  }

  int cap()
  {
    return capacity;
  }

  int &operator[] (int i)
  {
    return data[i];
  }

  ~ArrayList()
  {
    delete[] data;
  }
};

std::ostream &operator <<(std::ostream &os, ArrayList &arr)
{
  os << "[";
  for (int i = 0; i < arr.count; i++)
  {
    os << arr.data[i];
    if (i < arr.count - 1) os << ", ";
  }

  os << "]";
  return os;
}

#endif //ARRAYLIST_H
