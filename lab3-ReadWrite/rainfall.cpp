#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>


using namespace std;

int main() {    
    const int MONTHS = 12;

    int years, totalMonths = 0;

    double rainfall, totalRainfall, averagePerMonth;
    
    cout << "Enter number of years: ";
    cin >> years;
    cout << "You've entered " << years << " years." << endl;

    for(int i = 0; i < years; i++)
    {
        cout << "Year " << (i + 1) << ": " << endl;
        for(int j = 0; j < MONTHS; j++)
        {
            cout << "How much rainfall (inches)\n" << "for month " << (j + 1) << ": ";
            cin >> rainfall;

            totalRainfall += rainfall;

            totalMonths++;
        }
    }

    averagePerMonth = totalRainfall / totalMonths;

    cout << setprecision(2) << fixed;
    cout << "Total number of months = " << totalMonths << endl;

    cout << "Total inches of rainfall = " << totalRainfall << endl;

    cout << "Average rainfall per month = " << averagePerMonth << endl;



    return 0;
}
