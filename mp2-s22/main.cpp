#include "header.h"
#include <iostream>
#include <iomanip>

using namespace std;

const char starSymbol = '*';
const char hashSymbol = '#';
const int numOfRows = 15;
const int numOfcolumns = 30;

int totalAmount = 0;
int totalSeats = 450;
int conformSeat = 0;
int q = 1;
char ticket[numOfRows][numOfcolumns];
double cost;

int displayMenu();
void displayChart();

int main(){
    int x, y, rate;
    int res;
    const int num = 15;
    int cost[num];

    cout << "\tSeating cpacity 15 rows, witch 30 seats in each row." << endl;

    for(int i = 0; i < numOfRows; i++){
        cout << "enter the cost for row " << (i + 1) << ": ";
        cin >> cost[i];
    }
    for(int j = 0; j < numOfRows; j++){
        for(int k = 0; k < numOfcolumns; k++)
            ticket [j][k] = hashSymbol;
    }
    int choice;
    do{
        choice = displayMenu();
        switch (choice)
        {
        case 1:
            cout << "View Seat Prices\n\n";
            for(int count = 0; count < numOfRows; count++){
                cout << "The price for row " << (count + 1) << ": ";
                cout << cost [count] << endl;

            }
            break;
        case 2:
            do {
                cout << "Select the row: ";
                cin >> x;
                cout << "Select the seat: ";
                cin >> y;
                if(ticket[x][y] == '*'){
                    cout << "Sorry seat is sold select another. " << endl;    
                }
                else{
                    rate = cost[x] + 0;
                    totalAmount = totalAmount + rate;
                    cout << "Ticket cost: " << rate << endl;
                    cout << "Book the Ticket (1 = YES / 2 = NO)):";
                    cin >> res;
                    totalSeats = totalSeats - res;
                    conformSeat += res;

                    if(res == 1){
                        cout << "Your ticket purchase has been confirmed." << endl;
                        ticket[x][y] = starSymbol;
                    }
                    else if(res == 2){
                        cout << "Would you continue for another seat? (YES = 1 / NO = 2)";
                        cout << endl;
                        cin >> q;
                    }
                }                
            }
            while(q == 1);
                break;
        case 3:
            cout << "Available Seats displays # symbol, filled seats displays * symbol\n\n";
            displayChart();
            break;
        case 4:
            cout << "Exit\n";
            break;
            default : cout << "Bad input\n";
        }
    }
        while (choice != 5);
        return 0;        
}

int displayMenu(){
    int MenuChoice;
    cout << endl << endl;
    cout << "\t...Pick one...\n";
    cout << "1. cost of seats. \n";
    cout << "2. buy a ticket. \n";
    cout << "3. display available seats. \n";
    cout << "4. Exit \n";

    cin >> MenuChoice;
    cout << endl << endl;
    return MenuChoice;
}

void displayChart(){
    cout << "\tSeats" << endl;
    cout << endl << "   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0\n";
    for (int i = 0; i < 15; i++){
        cout << endl << "Row " << (i + 1);
        for(int j = 0; j < 30; j++){
            cout << " " << ticket[i][j];
        }
    }
    cout << endl;
    
}
