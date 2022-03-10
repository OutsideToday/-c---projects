#include <iostream>
#include <cmath>
using namespace std;

double rate;
double interest;
double compound;
double principal;
double amount;

int main(){
    

    cout << "Rate? :";
    cin >> rate;
    cout << "Compound? :";
    cin >> compound;
    cout << "Principal? :";
    cin >> principal;

    rate = rate/100;

    amount = principal * pow(1 + rate / compound, compound);

    cout << "Amount after " << compound << " Times Compounded = $" << amount << "\n";

    return 0;
}
