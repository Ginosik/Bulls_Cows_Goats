#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Introducing the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;

	//Get a guess from the player
	cout << "What will be your guess?";
	string Guess = "";
	cin >> Guess;

	//Repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	cout << endl;

	return 0;
}