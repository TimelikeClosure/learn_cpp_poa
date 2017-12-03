#include <iostream>
using namespace std;

int main(void){
    int number, isOdd;

    cout << endl << "Please enter a number:" << endl;
    cin >> number;

    isOdd = number % 2;

    cout << endl << number << " is ";
    if (isOdd){
        cout << "odd";
    } else {
        cout << "even";
    }
    cout << endl;

    return 0;
}