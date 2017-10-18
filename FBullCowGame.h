#pragma once
#include <string>

class FBullCowGame
{
public:
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();//TODO make a more rich return value.
	bool CheckGuessValidaty(std::string);



// ^^ Focus on the interface above ^^
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};