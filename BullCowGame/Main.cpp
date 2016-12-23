#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

int main()
{
	PrintIntro();

	// repeat the guess back to them
	cout << "Your guess was " << GetGuess() << endl << endl;
	cout << "Your guess was " << GetGuess() << endl << endl;

	return 0;
}

// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 6;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n\n";
	return;
}

// get a guess from the player
string GetGuess() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// return guess as string
	return Guess;
}