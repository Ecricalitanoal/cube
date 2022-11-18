#include <iostream>
#include "Cube.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int player, scoreHuman = 0, scoreComputer = 0, score, ik = 0;
    player = playerChoicer();
    if (player == 0) player = -1;
    //1 - Human, -1 - Computer
    for (int i = 0; i < 8; i++)
    {
        if (player == 1)
        {
            std::cout << "Бросает человек! \n";
            score = randomCubeNumber();
            solution(score, scoreHuman);
            moveChoicer(player);
            ik++;
        }
        else if (player == -1)
        {
            std::cout << "Бросает компьютер! \n";
            score = randomCubeNumber();
            solution(score, scoreComputer);
            moveChoicer(player);
            ik++;
        }
        if (ik % 2 == 0)
        {
            std::cout << "Очки человека: " << scoreHuman << '\n';
            std::cout << "Очки комьютера: " << scoreComputer << '\n' << '\n';
        }
    }
    winChoicer(scoreHuman, scoreComputer);
}
