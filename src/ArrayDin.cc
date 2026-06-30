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
