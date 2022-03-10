#include <iostream>
using namespace std;

int *createNew(int *, const int);
void display(int *, const int);

int *createNew(int *array, const int SIZE)
{
    const int NEW_SIZE = SIZE + 1;
    int *newArray = new int[NEW_SIZE];

    for(int i = 0; i < NEW_SIZE; i++)
    {
        if (i == 0)
            *(newArray + i) = 20;
        else 
            *(newArray + i) = array[i - 1];
    }

    return newArray;
}

void display(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
}

int main() 
{
    const int SIZE = 5;
    int numbers[SIZE] = { 2, 4, 6, 8, 10};

    int *oneAdded = createNew(numbers, SIZE);

    display(numbers, SIZE);
    cout << endl;
    display(oneAdded, (SIZE + 1));
    cout << endl;

    delete [] oneAdded;
    oneAdded = nullptr;

    return 0;
}

