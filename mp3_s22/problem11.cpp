#include <iostream>
using namespace std;

// prototypes
void display(int *, const int);
int *ArraySize2(int[], const int);

int *ArraySize2(int array[], const int SIZE)
{
    const int NEW_SIZE = SIZE * 2;
    int *outArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i >= SIZE)
            *(outArray + i) = 0;
        else
            *(outArray + i) = array[i];
    }

    return outArray;
}
void display(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
}

// main
int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {2, 4, 6, 8, 10};

    int *numsDoubled = ArraySize2(numbers, SIZE);

    display(numbers, SIZE);
    cout << endl;
    display(numsDoubled, (SIZE * 2));
    cout << endl
         << endl;

    delete[] numsDoubled;
    numsDoubled = nullptr;

    return 0;
}
