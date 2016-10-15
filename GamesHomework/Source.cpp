#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>
#include "Header.h"
int main()
{
	std::cout << "Should be playing sound right now.\n";
	srand(time(NULL));
	PlaySound(TEXT("mus_combat_01.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Application* CurrentGame=new RPS(false);
	CurrentGame->Start();
	CurrentGame->Run();
	CurrentGame->Shutdown();
	return 0;
}
