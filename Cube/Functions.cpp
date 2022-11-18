#include "Cube.h"
#include <iostream>
#include <ctime>

int playerChoicer()
{
	srand(time(0));
	int random = rand() % 2;
	return random;
}
int randomCubeNumber()
{
	int random1, random2;
	random1 = rand() % 6 + 1;
	random2 = rand() % 6 + 1;
	std::cout << "Выпало: \n";
	std::cout << " =====   =====\n|     | |     |\n|  " << random1 <<"  | |  " << random2 << "  |\n|     | |     |\n =====   ===== \n";
	return random1 + random2;
}

void solution(int randomNumber, int& score)
{

	score += randomNumber;
	std::cout << '\n';
}

void winChoicer(int x, int y)
{
	if (x > y) std::cout << "Выиграл человек!\n";
	else if (x < y) std::cout << "Выиграл компьютер!\n";
	else std::cout << "Ничья!\n";
}
void moveChoicer(int& x)
{
	if (x == 1) x = -1;
	else x = 1;
}



