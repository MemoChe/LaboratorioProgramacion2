#include <iostream>
#include "ArrayDin.h"
using namespace std;

int main() {
    int base[] = {10, 20, 30};

    ArrayDin ad(base, 3);

    int base2 [] = {40,50, 60};

    ArrayDin ad2 (base2,3);

    ArrayDin ad3 = ad + ad2; // operator +
                             
    cout << ad3 << endl; // operator <<
                         //
    cout << ad3.getSize() << endl;

    cout << (ad == ad2) << endl;

    cout << ad ;

    cout << ad2;
    return 0;
}
