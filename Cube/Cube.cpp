#include <iostream>
#include <ctime>
#include "Cube.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int player, scoreHuman = 0, scoreComputer = 0, score, ik = 0;
    player = playerChoicer();
    for (int i = 0; i < 8; i++)
    {
        que(i, player);
        score = randomCubeNumber();
        solution(score, scoreComputer, scoreHuman, player);
        moveChoicer(player, ik);
        scoreW(ik, scoreHuman, scoreComputer);
    }
    winChoicer(scoreHuman, scoreComputer);
}