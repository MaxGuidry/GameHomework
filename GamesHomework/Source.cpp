#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>

void CoinToss();
void DiceRoll();
void TicTacToe();

int main()
{
	srand(time(NULL));
	TicTacToe();
	PlaySound(TEXT("C:\\Users\\max.guidry\\Documents\\Music\\Prayer Position Instrumental"), NULL, SND_ASYNC);
	DiceRoll();
	CoinToss();
	getchar();
	system("pause");
	return 0;
}


/*
Coin Flip
•The user should call the coin flip and if the user guesses the flip correctly it is a victory otherwise it is a lost.
•Must show the outcome of the dice flip each time the dice is flipped
*/
void CoinToss()
{
	std::string PlayAgain;
	while (PlayAgain[0] != 'n')
	{
		std::cout << "Enter 1 for\"heads\" or 2 for \"tails\"" << std::endl;
		int CoinSideGuess;
		std::cin >> CoinSideGuess;
		int CoinSide;
		CoinSide = rand() % 2 + 1; //random side of the coin
		switch (CoinSide)//logic for who wins the game
		{
			case 1:
			{
				std::cout << "HEADS" << std::endl;
				if (CoinSideGuess == CoinSide)
				{
					std::cout << "YOU WIN" << std::endl;
				}
				else
				{
					std::cout << "YOU LOSE" << std::endl;
				}
				break;
			}
			case 2:
			{
				std::cout << "TAILS" << std::endl;
				if (CoinSideGuess == CoinSide)
				{
					std::cout << "YOU WIN" << std::endl;
				}
				else
				{
					std::cout << "YOU LOSE" << std::endl;
				}
				break;
			}
		}
		std::cout << "Do you want to play again? y/n" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, PlayAgain);
	}
}

void DiceRoll()
{
	std::string PlayAgain;
	while (PlayAgain[0] != 'n')
	{
		std::cout << "How many times would you like to roll the dice?" << std::endl;
		int NumberOfRolls;
		std::cin >> NumberOfRolls;
		for (int i = 0; i < NumberOfRolls; i++)
		{
			std::cout << "Guess what side the die will land on." << std::endl;
			int SideOfDieGuess;
			std::cin >> SideOfDieGuess;
			int ComputerSideGuess = rand() % 6 + 1;
			std::cout << "The computer guessed: " << ComputerSideGuess << std::endl;
			int SideOfDie = rand() % 6 + 1;
			std::cout << "The die landed on: " << SideOfDie << std::endl;
			if (SideOfDieGuess == ComputerSideGuess)
			{
				std::cout << "YOU TIED THE COMPUTER." << std::endl;
			}
			else if (SideOfDieGuess <= SideOfDie && (ComputerSideGuess > SideOfDie || ComputerSideGuess < SideOfDieGuess))
			{
				std::cout << "CONGRATS YOU BEAT THE COMPUTER!" << std::endl;
			}
			else if (ComputerSideGuess <= SideOfDie && (SideOfDieGuess > SideOfDie || SideOfDieGuess < ComputerSideGuess))
			{
				std::cout << "SORRY THE COMPUTER BEAT YOU." << std::endl;
			}
			else
			{
				std::cout << "YOU BOTH LOST" << std::endl;
			}
		}
		std::cout << "Do you want to play again? y/n" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, PlayAgain);
	}
}

void TicTacToe()
{
	char GridArray[9] = {219,219,219,219,219,219,219,219,219};
	std::cout << "Welcome to Tic Tac Toe! You are X's and the computer is O's" << std::endl;
	bool IsGameWon = false;
	while (IsGameWon == false)
	{
		int position;
		std::cin >> position;
		while (GridArray[position - 1] == 'X' || GridArray[position - 1] == 'O')
		{
			std::cin >> position;
		}
		GridArray[position - 1] = 'X';
		int ComputerPosition = rand() % 9 + 1;
		while (GridArray[ComputerPosition - 1] == 'X' || GridArray[ComputerPosition - 1] == 'O')
		{
			ComputerPosition = rand() % 9 + 1;
		}
		GridArray[ComputerPosition - 1] = 'O';
		for (int i = 1; i < 10; i++)
		{
			{
				std::cout << GridArray[i - 1] << " ";
			}
			if (i % 3 == 0)
			{
				std::cout << std::endl;
			}
		}
		for (int j = 3; j < 6; j++)
		{
			if (GridArray[j] == 'X' && GridArray[j - 3] == 'X' && GridArray[j + 3] == 'X')
				IsGameWon = true;
		}
		for (int j = 1; j < 8; j += 3)
		{
			if (GridArray[j] == 'X' && GridArray[j - 1] == 'X' && GridArray[j + 1] == 'X')
				IsGameWon = true;
		}
		if (GridArray[4] == 'X' && GridArray[0] == 'X' && GridArray[8] == 'X')
			IsGameWon = true;
		if (GridArray[4] == 'X' && GridArray[2] == 'X' && GridArray[6] == 'X')
			IsGameWon = true;
		for (int j = 3; j < 6; j++)
		{
			if (GridArray[j] == 'O' && GridArray[j - 3] == 'O' && GridArray[j + 3] == 'O')
				IsGameWon = true;
		}
		for (int j = 1; j < 8; j += 3)
		{
			if (GridArray[j] == 'O' && GridArray[j - 1] == 'O' && GridArray[j + 1] == 'O')
				IsGameWon = true;
		}
		if (GridArray[4] == 'O' && GridArray[0] == 'O' && GridArray[8] == 'O')
			IsGameWon = true;
		if (GridArray[4] == 'O' && GridArray[2] == 'O' && GridArray[6] == 'O')
			IsGameWon = true;
		std::cout << std::endl;
	}
}