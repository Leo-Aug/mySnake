//
// Created by LiuYang on 2020/1/17.
//

#ifndef MYSNAKE_FUNCTIONS_H
#define MYSNAKE_FUNCTIONS_H
#include <stdlib.h>
#include "structs.h"
#include "define.h"
Body *create(void);         /*创建蛇*/

short sleep_s(int iTime);     /*延时函数*/

coordinate create_food(char map[WIDTH][LENGTH]);     /*生成食物*/

int game(Body *Nail, char map[WIDTH][LENGTH]);     /*游戏主体*/

Body *move(Body *Nail, coordinate dir);     /*移动函数*/

void out_map(char map[WIDTH][LENGTH]);      /*打印地图，包括蛇身和食物*/

Body *eat(Body *Nail, coordinate Nail_befmov);

void map_init(char map[WIDTH][LENGTH]);
#endif //MYSNAKE_FUNCTIONS_H
