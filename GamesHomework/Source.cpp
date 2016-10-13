#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>
#include "Header.h"

int main()
{
	Application* CurrentGame=new RPS();
	CurrentGame->Start();
	CurrentGame->Run();
	CurrentGame->Shutdown();
	return 0;
}
