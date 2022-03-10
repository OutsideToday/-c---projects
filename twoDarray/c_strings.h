#ifndef CSTRINGS_H
#define CSTRINGS_H

char** create2Darray(int rows, int columns);
void populate(char** pp, int rows, int columns);
void traverse(char** pp, int rows, int columns);
void freeMemory(char** pp, int rows);

#endif