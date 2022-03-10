#include <iostream>
#include "header.h"

using namespace std;

int main(){
    testStaticVar();
}

void testStaticVar(){
    static int x = 10;
    cout << x;
}