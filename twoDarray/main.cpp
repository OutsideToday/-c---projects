#include <iostream>
#include <cstring>
using namespace std;
#include "c_strings.h"

int main()
{
    char** pp = create2Darray(3,4);
    populate(pp, 3, 4);
    traverse(pp, 3, 4);
    freeMemory(pp, 3);
    return 0;
}

char** create2Darray(int rows, int columns)
{
    char** pp = new char**[rows];

    for (int i = 0; i < rows; ++i)
    {
        pp[i] = new int[columns];
    }

    return pp;
}


void populate(char** pp, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j)
            pp[i][j] = (i + 1) * j;

    
}

void traverse(char** pp, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j <= columns; ++j)
        {
            cout << pp[i][j] << " ";
        }
        cout << endl;
    }
}

void print(char **pp, int size)
{
    for(int i=0; i<size; ++i)
    {
        cout << pp[i] << endl;
    }
}

void freeMemory(char** pp, int rows)
{
    for (int i=0; i<rows; ++i)
    {
        delete[] *pp; 
    }
}