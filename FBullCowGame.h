#pragma once
#include <string>

class FBullCowGame
{
public:
	FBullCowGame(); //Constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();//TODO make a more rich return value.
	bool CheckGuessValidaty(std::string);



// ^^ Focus on the interface above ^^
private:
	//See constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};