#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "structs.h"
#include "define.h"
#include "functions.h"


int main(void)
{
    char map[WIDTH][LENGTH];    /*创建地图*/
    int i, j;
    system("cls");

    for(i = 0;i < WIDTH;i++)
    {
        for(j = 0;j < LENGTH;j++)
            map[i][j] = EMPTY;
    }
    Body *Nail = create();      /*创建蛇，头节点取名为Nail*/
    game(Nail, map);            /*进入游戏主体*/
    system("pause");
    return 0;
}