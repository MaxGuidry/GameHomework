#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>

void CoinToss();

int main()
{
	srand(time(NULL));
	CoinToss();
	system("pause");
	return 0;
}






void CoinToss()
{
	std::string PlayAgain;
	while (PlayAgain[0] != 'n')
	{
		std::cout << "Enter 1 for\"heads\" or 2 for \"tails\"" << std::endl;
		int CoinSideGuess;
		std::cin >> CoinSideGuess;
		int CoinSide;
		CoinSide = rand() % 2 + 1;
		switch (CoinSide)
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