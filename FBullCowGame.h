#pragma once

class GBullCowGame
{
public:
	void Reset();//TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidaty(string);



// ^^ Focus on the interface above ^^
private:
	int MyCurrentTry;
	int MyMaxTries;
};