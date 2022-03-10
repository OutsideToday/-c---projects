#include <iostream>
#include "testPointerHeader.h"

using namespace std;

int main(){

    pointer1();
    return 0;
}


void pointer1(){

    int x = 25;
    int *ptr = nullptr;
    ptr = &x;
    cout << "x value is " << x << endl;
    cout << "adress of x " << ptr << endl;
    cout << "dereference"  << *ptr << endl;

 
}

