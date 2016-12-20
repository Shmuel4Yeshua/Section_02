#include <iostream>
#include <string>

using namespace std;

int main()
{
	// introduce the game
	constexpr int WORD_LENGTH = 9;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";

	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	cin >> Guess;

	// repeat the guess back to them
	cout << "Your guess is: " << Guess << endl;

	return 0;
}