#include <iostream>
#include <cstring>
using namespace std;

int*** createArray(int, int, int);
void initialize(int ***, int, int, int);
void traverse(int ***, int, int, int);
void deleteArray(int ***, int, int, int);

int main() {
    int*** testAr = createArray(2, 3, 4);
    initialize(testAr, 2, 3, 4);
    traverse(testAr, 2, 3, 4);
    deleteArray(testAr, 2, 3, 4);

    return 0;
}

int*** createArray(int numTables, int rows, int columns){
    int*** ppp = new int**[numTables];

    for(int x = 0; x < numTables; x++){
        int** pp = new int*[rows];
        ppp[x] = pp;

        for(int i = 0; i < rows; ++i){
            pp[i] = new int[columns];
        }
    }

    return ppp;
}

void deleteArray(int ***pArray, int tables, int rows, int columns){
    for(int i = 0; i < tables; ++i){
        for(int x = 0; x < rows; ++x){
            delete[] pArray[i][x];
        }
        delete[] pArray[i];
    }
    delete[] pArray;
}

void initialize(int ***pArray, int numTables, int rows, int columns){
    for(int i = 0; i < numTables; i++){
        for(int x = 0; x < rows; x++){
            for(int z = 0; z < columns; z++){
                pArray[i][x][z] = (i + x + 1) * z;
            }
        }
    }
}

void traverse(int ***pArray, int numTables, int rows, int columns){
    for(int i = 0; i < numTables; i++){
        cout << " Table " << i+1 << endl;
        for(int h = 0; h < rows; h++){
            for(int x = 0; x < columns; x++){
                cout << pArray[i][h][x] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}