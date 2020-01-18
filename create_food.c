//
// Created by LiuYang on 2019/12/25.
// 在地图上随机生成食物
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"
#include "define.h"

coordinate create_food(char map[WIDTH][LENGTH])
{
    coordinate food;
    srand(time(NULL));
    do                                                  /*不断生成食物位置，直到生成的食物位置上没有蛇身存在*/
    {
        food.ordinate = rand() % WIDTH;
        food.abscissa = rand() % LENGTH;
    }while(map[food.ordinate][food.abscissa] == FULL);
    return food;
}