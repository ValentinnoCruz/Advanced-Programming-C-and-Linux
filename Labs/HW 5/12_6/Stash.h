#ifndef STASH_H
#define STASH_H

#include <iostream>
#include <ostream>
#include <string>

struct Stash
{
  unsigned char **data;
  unsigned int *type;
  int count;
  int capacity;

  Stash()
  {
    data = new unsigned char*[1];
    type = new unsigned int[1];
    count = 0;
    capacity = 1;
  }

  void inflate()
  {
    unsigned char **new_data = new unsigned char*[capacity * 2];
    unsigned int *new_type = new unsigned int[capacity * 2];

    for (int i = 0; i < capacity; i++)
    {
      new_data[i] = data[i];
      new_type[i] = type[i];
    }

    delete[] data;
    delete[] type;

    data = new_data;
    type = new_type;
    capacity = capacity * 2;
  }

  void append(int x)
  {
    type[count] = 0;
    data[count] = new unsigned char[4];

    data[count][3] = ((unsigned)x >> 0u) & 0xffu;
    data[count][2] = ((unsigned)x >> 8u) & 0xffu;
    data[count][1] = ((unsigned)x >> 16u) & 0xffu;
    data[count][0] = ((unsigned)x >> 24u) & 0xffu;

    count++;
    if (count == capacity) inflate();
  }

  void append(char x)
  {
    type[count] = 1;
    data[count] = new unsigned char[1];
    data[count][0] = x;

    count++;
    if (count == capacity) inflate();
  }

  void append(std::string x)
  {
    type[count] = 2;
    data[count] = new unsigned char[x.size() + 1];

    for (int i = 0; i < x.size(); i++)
      data[count][i] = x[i];
    data[count][x.size()] = '\0';

    count++;
    if (count == capacity) inflate();
  }

  void append(const Stash& s)
  {
    const Stash *pointer = &s;

    type[count] = 3;
    data[count] = new unsigned char[sizeof(pointer)];
    memcpy(&data[count], &pointer, sizeof(pointer));

    count++;
    if (count == capacity) inflate();
  }

  int length() const
  {
    return count;
  }
};

std::ostream &operator <<(std::ostream &os, const Stash &s)
{
  os << "[";
  for (int i = 0; i < s.count; i++)
  {
    if (s.type[i] == 0)
    {
      unsigned int x = 0;
      for (int j = 0; j < 4; j++)
      {
        x <<= 8u;
        x |= s.data[i][j];
      }

      os << x;
    }
    else if (s.type[i] == 1)
    {
      os << "'" << (char)s.data[i][0] << "'";
    }
    else if (s.type[i] == 2)
    {
      os << "\"" << (char *)s.data[i] << "\"";
    }
    else if (s.type[i] == 3)
    {
      const Stash *ss = (const Stash *)s.data[i];
      os << (const Stash &)*ss;
    }

    if (i < s.length() - 1) os << ", ";
  }
  os << "]";
  return os;
}

#endif //STASH_H
