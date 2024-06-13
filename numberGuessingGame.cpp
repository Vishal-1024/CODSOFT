#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_TRIES_FACTOR = 5;    // Factor for calculating maximum tries
const int CLOSE_DIFF_FACTOR = 20;  // Factor for calculating close difference

// Function to handle user input
void getUserInput(int& maxValue, int& minValue) {
    cout << "Enter the maximum value for the range (0 to ?): ";
    cin >> maxValue;

    // Input validation
    if (maxValue <= 0) {
        cout << "Invalid input. Maximum value must be positive." << endl;
        exit(1);
    }

    minValue = 0;  // Set the minimum value to 0
}

// Function to handle game logic
void playGame(int maxValue, int minValue) {
    bool guessedCorrectly = false;
    int range = maxValue - minValue + 1;
    srand(time(0));  
    int randomNumber = rand() % range + minValue;

    int maxTries = maxValue / MAX_TRIES_FACTOR;
    int remainingTries = maxTries;
    cout << "You have " << maxTries+1  << " tries in total." << endl;

    int userGuess;
    cout << "Guess the number between " << minValue << " and " << maxValue << ": ";
    int closeDifference = maxValue / CLOSE_DIFF_FACTOR;
    if (closeDifference == 0) {
        closeDifference = 1;
    }

    for (int i = 0; i <= remainingTries; i++) {
        cin >> userGuess;
        int difference = abs(userGuess - randomNumber);

        if (difference <= closeDifference && difference != 0) {
            cout << "You're very close!" << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low!" << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You've guessed the number correctly: " << randomNumber << endl;
            guessedCorrectly = true;
            break;
        }

        if (!guessedCorrectly) {
            cout << "Guess the number between " << minValue << " and " << maxValue << ": ";
        }
    }

    if (!guessedCorrectly) {
        cout << "Sorry, you ran out of tries." << endl << "The number was " << randomNumber << "." << endl;
    }
}

int main() {
    int maxValue, minValue;
    getUserInput(maxValue, minValue);  // Get user input
    playGame(maxValue, minValue);      // Play the game

    return 0;
}