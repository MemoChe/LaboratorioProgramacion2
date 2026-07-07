#ifndef __ARRAYDIN__
#define __ARRAYDIN__
#include <iostream>
#include <ostream>

class ArrayDin {
private:
    int size;
    int *data;

public:
    ArrayDin();
    ArrayDin(const int arr[], int size);
    ~ArrayDin();
    void push_back(int value);
    void insert(int pos, int value);
    void remove(int pos);
    int getSize() const;
    ArrayDin operator +( ArrayDin &);
    bool operator ==( ArrayDin &);
    bool operator >( ArrayDin &);
    bool operator <( ArrayDin &);
    int & operator [](int &);
    friend std::ostream & operator << ( std::ostream & os , ArrayDin & l){
      for (int i =0 ; i < l.getSize(); i++) {
        os  << l[i] << " ";
      }
      os << '\n';
      return os;
    }
};

#endif
