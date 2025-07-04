#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	cout << "=== Welcome to number guessing game ===" << endl;
	char choice = 'y';
	while (choice == 'y') {
		bool guessed = false;
		srand(time(0));
		int number = 1 + rand() % (1000 - 1 + 1);
		int user_guess = 0;
		while (guessed != true) {
			cout << endl << "Think of number between 1 and 1000" << endl;
			cout << "Enter your guess: ";
			cin >> user_guess;
			if (user_guess == number) {
				guessed = true;
				cout << "Congratulations! You guessed it Right!" << endl;
			}
			else if ((user_guess - number) >= 50) {
				cout << "You are guessing a very high number" << endl;
			}
			else if ((number - user_guess) >= 50) {
				cout << "You are guessing a very low number" << endl;
			}
			else if ((user_guess - number) < 50 && (user_guess - number) > 0) {
				cout << "You are guessing a little  bit higher number" << endl;
			}
			else if ((number - user_guess) < 50) {
				cout << "You are guessing a little  bit lower number" << endl;
			}
		}
		cout << "Do you want to try again(y/n)";
		cin >> choice;
		if (choice == 'n') {
			cout << "Exited succesfully." << endl;
		}
		if (choice != 'y' && choice != 'n') {
			cout << "Wrong choice!" << endl;
			exit(0);
		}
	}
	return 0;
}