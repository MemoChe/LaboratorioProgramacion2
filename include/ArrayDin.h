#ifndef __ARRAYDIN__
#define __ARRAYDIN__

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
};

#endif
