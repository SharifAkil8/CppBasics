#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // USEFUL FUNCIONS FROM MATH LIBRARY
    cout << "The square root of 2 is: " << sqrt(2.0) << endl;
    cout << "2 to the power of 3 is: " << pow(2,3) << endl;
    cout << "The sine of 0 is: " << sin(0) << endl;
    cout << "The cosine of 0 is: " << cos(0) << endl;
    cout << "The tangent of 0 is: " << tan(0) << endl;
    cout << "The log of 1 is: " << log(1) << endl;

    // GUESSING GAME USING CTIME LIBRARY FOR RANDOM NUMBER GENERATOR
    srand(time(0));
    int numToGuess = (rand() % 100) + 1;   // Modulus 100 will set a range from 1 to 100.
    int myGuess;
    cout << "Guess a number from 1 to 100: ";
    cin >> myGuess;
    int numOfGuesses = 1;
    while (myGuess != numToGuess){
        if(myGuess < numToGuess){
            cout << "Too low" << endl;
        }   else{
                cout << "Too high" << endl;
            }
        cout << "Guess again: ";
        cin >> myGuess;
        numOfGuesses++;
    }
    cout << "You guessed it after " << numOfGuesses << " tries!" << endl;
}