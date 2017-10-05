#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//The entry point for our application
int main()
{
	PrintIntro();

	for (int i = 0; i < 2; i++)GetGuessAndPrintBack();

	cout << endl;

	return 0;
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

//Get a guess from the player
string GetGuessAndPrintBack()
{
	cout << "What will be your guess?";
	string Guess = "";
	getline(cin, Guess);
	//Repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}