#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
string PrintGuess();


// the entry for our application
int main()
{
	PrintIntro();
	PlayGame();
	return 0; // exit the application
}


// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 6;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n\n";
	return;
}

// loop for the number of turns asking for guesses
void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int attempt = 1; attempt <= NUMBER_OF_TURNS; attempt++)
	{
		PrintGuess();
	}
}

// get a guess from the player
string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// return guess as string
	return Guess;
}

// print guess back to player
string PrintGuess()
{
	cout << "Your guess was " << GetGuess() << endl;
	cout << endl;
	return string();
}
