#pragma once
#include <string>

class FBullCowGame
{
public:
	void Reset();//TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidaty(std::string);



// ^^ Focus on the interface above ^^
private:
	int MyCurrentTry;
	int MyMaxTries;
};