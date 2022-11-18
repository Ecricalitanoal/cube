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
	switch (random1)
	{
	case 1:
	{
		std::cout << " =====\n|     |\n|  *  |\n|     |\n =====";
		break;
	}
	case 2:
	{
		std::cout << " =====\n|*    |\n|     |\n|    *|\n =====";
		break;
	}
	case 3:
	{
		std::cout << " =====\n|*    |\n|  *  |\n|    *|\n =====";
		break;
	}
	case 4:
	{
		std::cout << " =====\n|*   *|\n|     |\n|*   *|\n =====";
		break;
	}
	case 5:
	{
		std::cout << " =====\n|*   *|\n|  *  |\n|*   *|\n =====";
		break;
	}
	case 6:
	{
		std::cout << " =====\n|* * *|\n|     |\n|* * *|\n =====";
		break;
	}
	}
	std::cout << '\n';
	switch (random2)
	{
	case 1:
	{
		std::cout << " =====\n|     |\n|  *  |\n|     |\n =====";
		break;
	}
	case 2:
	{
		std::cout << " =====\n|*    |\n|     |\n|    *|\n =====";
		break;
	}
	case 3:
	{
		std::cout << " =====\n|*    |\n|  *  |\n|    *|\n =====";
		break;
	}
	case 4:
	{
		std::cout << " =====\n|*   *|\n|     |\n|*   *|\n =====";
		break;
	}
	case 5:
	{
		std::cout << " =====\n|*   *|\n|  *  |\n|*   *|\n =====";
		break;
	}
	case 6:
	{
		std::cout << " =====\n|* * *|\n|     |\n|* * *|\n =====";
		break;
	}
	}	
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

void que(int queue)
{
	if (queue % 2 == 0) std::cout << '\n' << queue / 2 + 1 << "-ый ход.\n";
}