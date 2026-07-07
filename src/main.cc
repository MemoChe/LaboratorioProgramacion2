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
    int base2 [] = {40,50, 60};

    ArrayDin ad2 (base2,3);

    ArrayDin ad3 = ad + ad2; // operator +
                             //
    cout << (ad == ad2);

    cout << ad3 ; // operator <<
    return 0;
}
