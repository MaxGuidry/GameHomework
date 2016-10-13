#pragma once
#include<iostream>

class Application
{
public:
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Shutdown() = 0;
	void Run();
protected:
	bool GameOver;
};
class RPS:public Application
{
public:
	void Shutdown();
	void Game();
	void Start() { std::cout << "Welcome to Rock Paper Scissors\nYou will play against the computer who will choose randomly\n"; }
	void Update() { Game(); }
	RPS() {}
};
class Games
{
public:
	void CoinToss();
	void DiceRoll();
	void TicTacToe();
	void RockPaperScissors();

};