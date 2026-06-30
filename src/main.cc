#include <iostream>
#include "ArrayDin.h"
using namespace std;

int main() {
    int base[] = {10, 20, 30};
    ArrayDin ad(base, 3);
    cout << ad.getSize() << endl;

    ad.push_back(40);
    cout << ad.getSize() << endl;

    ad.insert(1, 15);
    cout << ad.getSize() << endl;

    ad.remove(0);
    cout << ad.getSize() << endl;

    return 0;
}
