#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;
int main()
{
    const int MIN = 1, MAX = 10;

    int random_num, user_num;

    unsigned seed = time(0);

    srand(seed);

    random_num = (rand() % (MAX - MIN + 1)) + MIN;

    cout << "Guess a number between 1 and 10." << endl;
    cin >> user_num;

    while (user_num != random_num)
    {
        cout << "Your number is "<< (user_num < random_num ? "lower." : "higher.");

        cout << "Try again: ";

        cin >> user_num;
    }
    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num   << endl;
    cout << endl;

    return 0;
}
