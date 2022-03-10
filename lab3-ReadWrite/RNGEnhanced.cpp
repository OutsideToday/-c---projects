#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;
int main()
{
    const int MIN = 1,
              MAX = 10;

    int randomNum, userNum, numberOfGuesses = 0;
    unsigned seed = time(0);

    srand(seed);

    randomNum = (rand() % (MAX - MIN + 1)) + MIN;

    cout << "Guess a number between 1 and 10." << endl;
    cin >> userNum;
    numberOfGuesses++;

    while (userNum != randomNum)
    {
        cout << "Your number is "
             << (userNum < randomNum ? 
                "lower." : "higher.");

        cout << "Try again: ";

        cin >> userNum;
        numberOfGuesses++;
    }
    
    cout << "\nCorrect! " << endl;
    cout << "Random number      = " << randomNum << endl;
    cout << "Your guess         = " << userNum   << endl;
    cout << "Number of guesses  = " << numberOfGuesses << endl;
    cout << endl;

    return 0;
}