#ifndef MEMORY_STUFF_H
#define MEMORY_STUFF_H

#include <iostream>

void memory_contents(int x)
{
  std::cout << (((unsigned)x >> 0u)  & 0xffu) << " "
            << (((unsigned)x >> 8u)  & 0xffu) << " "
            << (((unsigned)x >> 16u) & 0xffu) << " "
            << (((unsigned)x >> 24u) & 0xffu) << std::endl;
}

int build_integer(unsigned char first, unsigned char second, unsigned char third, unsigned char fourth)
{
  unsigned int result = 0;
  result <<= 8u;
  result |= fourth;
  result <<= 8u;
  result |= third;
  result <<= 8u;
  result |= second;
  result <<= 8u;
  result |= first;

  return (int)result;
}

struct FixedArrayList
{
  int *arr;
  int size;

  FixedArrayList()
  {
    size = 10;
    arr = new int[size];
    for (int i = 0; i < size; i++) arr[i] = 0;
  }

  FixedArrayList(int new_size)
  {
    size = new_size;
    arr = new int[size];
    for (int i = 0; i < size; i++) arr[i] = 0;
  }

  void put(int x, int pos)
  {
    if (pos < 0 || pos >= size)
    {
      throw std::runtime_error("Position out of bound");
    }

    arr[pos] = x;
  }

  int get(int pos)
  {
    if (pos < 0 || pos >= size)
    {
      throw std::runtime_error("Position out of bound");
    }

    return arr[pos];
  }
};

#endif //MEMORY_STUFF_H
