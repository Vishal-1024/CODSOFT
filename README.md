**Number Guessing Game**

**Overview**
This project, created as part of the CODSOFT internship Task 1, is a number guessing game where the program generates a random number, and the user attempts to guess it. The program provides feedback on whether the guess is too high or too low until the user guesses the correct number.

Enhancements:
Input Validation-
Ensures the user enters a positive maximum value for the guessing range.
Dynamic Difficulty Adjustment-
Introduced a constant MAX_TRIES_FACTOR to calculate the maximum number of tries based on the maximum value entered by the user. This allows the game to adjust the difficulty level dynamically.
Remaining Tries Feedback-
Added a feature to display the remaining number of tries to the user during the game.
Close Feedback Mechanism-
Implemented a "close" feedback mechanism using the CLOSE_DIFF_FACTOR constant. If the user's guess is within a certain range of the correct number, the program will inform the user that they are "very close" to the correct answer.
Code Organization-
Optimized the code by separating the game logic into two functions: getUserInput and playGame. This improves code organization and maintainability.
Improved Code Readability-
Added comments to explain the purpose of each function and constant, improving overall code readability.

Features:
Engaging Gameplay-
The game dynamically adjusts the difficulty level and provides better feedback, making the game more engaging and informative.
User-Friendly-
Ensures input validation and provides clear feedback mechanisms to enhance the user experience.
Maintainable Code-
Improved code organization and added comments for better readability and maintainability.

How to Play:
-Run the program.
-Enter a positive maximum value for the guessing range when prompted.
-Guess the randomly generated number within the specified range.
-The program will provide feedback on whether your guess is too high or too low and indicate if you are "very close" to the correct number.
-Continue guessing until you find the correct number or run out of tries.
