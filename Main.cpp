#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintGuess(std::string Guess);
bool AskToPlayAgain();


//The entry point for our application
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	return 0; //Exit the application
}


//Introducing the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}


//Loop for the number of turns asking for guess
void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		PrintGuess(GetGuess());
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return;
}


//Get a guess from the player
std::string GetGuess()
{
	std::cout << "What will be your guess?";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}


//Repeat the guess back to them
void PrintGuess(std::string Guess)
{
	std::cout << "Your guess was: " << Guess << std::endl;
	return;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n)";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}