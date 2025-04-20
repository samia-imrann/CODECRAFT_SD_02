#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int generateRandomNumber() {
    srand(time(0));
    return rand() % 100 + 1;
}

int getUserGuess() {
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    return guess;
}

void giveFeedback(int guess, int secret) {
    int difference = abs(guess - secret);

    if (difference == 0) 
    {
        
    }
    else if (difference <= 2) {
        cout << "Very close! ";
        if (guess < secret)
            cout << "Just a bit low." << endl;
        else
            cout << "Just a bit high." << endl;
    }
    else if (difference <= 5) {
        cout << "Close! ";
        if (guess < secret)
            cout << "But still low." << endl;
        else
            cout << "But still high." << endl;
    }
    else if (guess < secret) {
        cout << "Too low!" << endl;
    }
    else {
        cout << "Too high!" << endl;
    }
}

int main() {
    int secretNumber = generateRandomNumber();
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;

    do {
        guess = getUserGuess();
        attempts++;
        giveFeedback(guess, secretNumber);
    } while (guess != secretNumber);

    cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;

    return 0;
}
