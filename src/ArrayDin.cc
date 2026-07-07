#include "ArrayDin.h"

ArrayDin::ArrayDin() {
    this->size = 0;
    this->data = nullptr;
}

ArrayDin::ArrayDin(const int arr[], int size) {
    this->size = size;
    this->data = new int[size];
    for (int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

ArrayDin::~ArrayDin() {
    delete[] this->data;
}

void ArrayDin::push_back(int value) {
    int *nuevo = new int[this->size + 1];
    for (int i = 0; i < this->size; i++)
        nuevo[i] = this->data[i];
    nuevo[this->size] = value;
    delete[] this->data;
    this->data = nuevo;
    this->size++;
}

void ArrayDin::insert(int pos, int value) {
    if (pos < 0 || pos > this->size)
        return;
    int *nuevo = new int[this->size + 1];
    for (int i = 0; i < pos; i++)
        nuevo[i] = this->data[i];
    nuevo[pos] = value;
    for (int i = pos; i < this->size; i++)
        nuevo[i + 1] = this->data[i];
    delete[] this->data;
    this->data = nuevo;
    this->size++;
}

void ArrayDin::remove(int pos) {
    if (pos < 0 || pos >= this->size)
        return;
    int *nuevo = new int[this->size - 1];
    for (int i = 0; i < pos; i++)
        nuevo[i] = this->data[i];
    for (int i = pos + 1; i < this->size; i++)
        nuevo[i - 1] = this->data[i];
    delete[] this->data;
    this->data = nuevo;
    this->size--;
}

int ArrayDin::getSize() const {
    return this->size;
}

int & ArrayDin::operator[](int & i) {
  if (i < 0 || i >= size) throw "Error the index has to be in the range of the size";
  return data[i];
}

ArrayDin ArrayDin::operator + (ArrayDin & other) {
    int newSize = this->size + other.size;
    int *combined = new int[newSize];
    for (int i = 0; i < this->size; i++)
        combined[i] = this->data[i];
    for (int i = 0; i < other.size; i++)
        combined[this->size + i] = other.data[i];
    ArrayDin result(combined, newSize);
    delete[] combined;
    return result;
}

bool ArrayDin::operator== (ArrayDin & other) {
    if (this->size != other.size)
        return false;
    for (int i = 0; i < this->size; i++)
        if (this->data[i] != other.data[i])
            return false;
    return true;
}

bool ArrayDin::operator < (ArrayDin & other) {
    if (this->size != other.size)
        return this->size < other.size;
    for (int i = 0; i < this->size; i++)
        if (this->data[i] != other.data[i])
            return this->data[i] < other.data[i];
    return false;
}

bool ArrayDin::operator > (ArrayDin & other) {
    if (this->size != other.size)
        return this->size > other.size;
    for (int i = 0; i < this->size; i++)
        if (this->data[i] != other.data[i])
            return this->data[i] > other.data[i];
    return false;
}


