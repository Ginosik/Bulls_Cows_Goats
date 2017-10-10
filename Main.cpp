#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintGuess(string Guess);


//The entry point for our application
int main()
{
	PrintIntro();

	PlayGame();

	return 0; //Exit the application
}


//Introducing the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}


void PlayGame()
{
	//Loop for the number of turns asking for guess
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		PrintGuess(GetGuess());
		cout << endl;
	}

	cout << endl;

	return;
}


//Get a guess from the player
string GetGuess()
{
	cout << "What will be your guess?";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}


//Repeat the guess back to them
void PrintGuess(string Guess)
{
	cout << "Your guess was: " << Guess << endl;
	return;
}