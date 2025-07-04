# Encrytix_Task_1
# Number Guessing Game - README

## Description
This is a simple console-based number guessing game written in C++. The program generates a random number between 1 and 1000, and the player tries to guess it. The game provides feedback on whether the guess is too high, too low, or close to the target number.

## Features
- Random number generation between 1 and 1000
- Interactive gameplay with feedback:
  - "Very high" or "Very low" if the guess is ≥50 away from the target
  - "A little bit higher" or "A little bit lower" if the guess is <50 away
  - Congratulatory message when the correct number is guessed
- Option to play again after each game
- Input validation for the play-again choice

## How to Run
1. Ensure you have a C++ compiler installed (e.g., g++)
2. Compile the program: `g++ task1.cpp -o guessing_game`
3. Run the executable: `./guessing_game` (Linux/Mac) or `guessing_game.exe` (Windows)

## Game Instructions
1. The program will generate a random number between 1 and 1000
2. Enter your guess when prompted
3. The game will tell you if your guess is too high, too low, or close to the target
4. Keep guessing until you find the correct number
5. After winning, choose 'y' to play again or 'n' to exit

## Requirements
- C++ compiler
- Standard Library (iostream, cstdlib, ctime)

## Notes
- The program uses `srand(time(0))` to seed the random number generator, making each game unique
- Input validation is provided for the play-again choice (only 'y' or 'n' accepted)

Enjoy the game!
