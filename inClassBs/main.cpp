#include <iostream>
#include<string>
#include<cmath>
#include"header.h"//---imports header

using namespace std;

int power(double base, double exp)
{
    return pow(base, exp);
}

void cast1()
{
    double number = 3.7;
    int val = static_cast<int>(number);
    cout << val;
}
void cast2()
{
    double number = 7.78;
    int val = (int) number;
    cout << val;
}

void read2() 
{
    double d;
    char c;
    cout << "please enter double and a char: " << endl;
    cin >> d >> c;
    cout << "You Entered: " << d << "," << c << endl;
	
}

int main()
{
    
    cast1();
    cast2();
}