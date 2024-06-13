numberGuessingGame.cpp file contains code which was task 1 under CODSOFT internship. 
The task was to: Create a program that generates a random number and asks the user to guess it. Provide feedback on whether the guess is too high or too low until the user guesses the correct number.
I've added some of my changes to it which are:
	Implemented input validation to ensure the user enters a positive maximum value for the range.
	Introduced a constant MAX_TRIES_FACTOR to calculate the maximum number of tries based on the maximum value entered by the user. This allows the 		game to adjust the difficulty level dynamically.
	Added a feature to display the remaining number of tries to the user during the game.
	Implemented a "close" feedback mechanism using the CLOSE_DIFF_FACTOR constant. If the user's guess is within a certain range of the correct 			number, the program will inform the user that they are "very close" to the correct answer.
	Optimized the code by separating the game logic into two functions: getUserInput and playGame. This improves code organization and 						maintainability.
	Improved code readability by adding comments to explain the purpose of each function and constant.
The program now provides a more engaging and informative experience for the user by dynamically adjusting the difficulty level, providing better feedback, and ensuring input validation. These changes enhance the overall user experience and make the game more enjoyable to play.
