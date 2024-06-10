#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(time(0)); // seed the random number generator
    int secretNumber = 1 + (rand() % 100); // generate a random number between 1 and 100

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Try to guess it!" << endl;

    int guess;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << " Congratulations! You guessed the correct number!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        } else {
            cout << "Your guess is too high. Try again!" << endl;
        }
    }

    return 0;
}