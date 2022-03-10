#include "header.h"
#include <iostream>
#include <iomanip>

using namespace std;

int *reverse(int[], const int);
void display(int *, const int);

int *reverse(int array[], const int SIZE){
    int *outArray = new int[SIZE];

    int j = (SIZE - 1);

    for (int i = 0; i < SIZE; i++, j--)
        *(outArray + i) = array[j];

    return outArray;
}

void display(int *array, const int SIZE){
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
}

int main(){
    const int SIZE = 10;
    int numbers[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int *numbsREversed = reverse(numbers, SIZE);

    cout << endl;
    display(numbers, SIZE);
    cout << endl;
    display(numbsREversed, SIZE);

    delete[] numbsREversed;
    numbsREversed = nullptr;

    return 0;
}
