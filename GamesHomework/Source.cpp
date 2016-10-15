#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>
#include "Header.h"
int main()
{
	srand(time(NULL));
	//test for update.
	PlaySound(TEXT("mus_combat_boss_02.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Application* CurrentGame=new RPS(false);
	CurrentGame->Start();
	CurrentGame->Run();
	CurrentGame->Shutdown();
	return 0;
}
