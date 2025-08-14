#include<iostream>
#include<limits>
using namespace std;

int main() {
	int luckyNumber = 3;
	int userInput;

	cout << "welcome to the lucky number game!^_^" << endl;
	cout << "Please enter a number:" << endl;

	while (true) {
		if (!(cin >> userInput)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number." << endl;
		}
		else {
			if (userInput == luckyNumber) {
				cout << "Congratulations!^_^ You guessed the lucky number!" << endl;
				break;
			}
			else {
				cout << "Sorry, taht's not the lucky numberT^T.Try again!" << endl;
				cout << "Please enter a number:" << endl;
			}
		}
	}
	return 0;
}