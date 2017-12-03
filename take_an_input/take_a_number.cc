#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int main(void){
    cout << endl << endl << "Welcome to Guess!!!" << endl << endl;
    cout << "To play Guess, you must guess the randomly-picked number from 1 to 10." << endl;
    cout << "- For each guess, you will be given a hint if your guess was wrong." << endl;
    cout << "- If you guess correctly, there will be fireworks!!!" << endl;
    cout << "    (You may not be able to see them, but trust us, they're there)" << endl;

    unsigned short int theNumber, userGuess;

    srand(time(NULL));

    theNumber = rand() % 10 + 1;
    userGuess = 0;

    while(userGuess != theNumber){
        cout << endl << "Enter a number please: " << endl;

        cin >> userGuess;
        if (userGuess < theNumber){
            cout << endl << userGuess << " is too low! Try again!" << endl;
        } else if (userGuess > theNumber){
            cout << endl << userGuess << " is too high! Try again!" << endl;
        } else {
            cout << endl << userGuess << " is correct!!!" << endl;
            cout << "Please make your way into the incineration room for fireworks" << endl << endl;
        }
    }

    return 0;
}