#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>
#include "Header.h"

int main()
{
	Games PlayGames;
	srand(time(NULL));
	PlayGames.RockPaperScissors();	
	PlayGames.TicTacToe();
	PlayGames.DiceRoll();
	PlayGames.CoinToss();
	system("pause");
	return 0;
}
