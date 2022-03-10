#include <iostream>
#include <cmath>
#include "header.h"

using namespace std;

int main() {    
    int ar[5] = {1,2,3,4,5};
    printArray(ar);

    return 0;
    
}
void printArray(int ar[5]){
    for(int i=0; i < 5; i++){
        cout << ar[i] << " ";

    }
}