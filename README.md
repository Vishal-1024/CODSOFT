Number Guessing Game
Overview
This is a simple number guessing game created as part of the CODSOFT internship Task 1. The program generates a random number and asks the user to guess it, providing feedback on whether the guess is too high or too low until the user guesses the correct number.

Enhancements
Several improvements have been made to the original program to enhance user experience and code maintainability:

Input Validation: Ensures the user enters a positive maximum value for the range.
Dynamic Difficulty Adjustment: Introduced a constant MAX_TRIES_FACTOR to calculate the maximum number of tries based on the maximum value entered by the user, dynamically adjusting the difficulty level.
Remaining Tries Feedback: Displays the remaining number of tries to the user during the game.
Close Feedback Mechanism: Implemented a "close" feedback mechanism using the CLOSE_DIFF_FACTOR constant. If the user's guess is within a certain range of the correct number, the program informs the user that they are "very close" to the correct answer.
Code Organization: Separated game logic into two functions: getUserInput and playGame to improve code organization and maintainability.
Comments: Added comments to explain the purpose of each function and constant, improving code readability.
Features
Engaging Gameplay: Provides a more engaging and informative experience by dynamically adjusting the difficulty level and providing better feedback.
User-Friendly: Ensures input validation and clear feedback mechanisms.
Maintainable Code: Organized and commented code for better readability and maintainability.
Usage
To play the game, simply run the program. You will be prompted to enter a maximum value for the guessing range. The game will then generate a random number within that range, and you will have to guess the number with feedback provided for each guess.
