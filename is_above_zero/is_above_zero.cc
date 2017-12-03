#include <iostream>
using namespace std;

int main(void){
    int theNumber;

    theNumber = -6;

    cout << endl << "theNumber = " << theNumber << endl;

    if (theNumber > 0){
        cout << "theNumber is greater than zero" << endl;
    } else if (theNumber < 0){
        cout << "theNumber is less than zero" << endl;
    } else{
        cout << "theNumber is equal to zero" << endl;
    }

    return 0;
}