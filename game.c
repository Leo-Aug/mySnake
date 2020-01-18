//
// Created by LiuYang on 2019/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "define.h"
#include "functions.h"

int game(Body *Nail, char map[WIDTH][LENGTH])
{
    coordinate direction = {1, 0};//移动方向初始化
    coordinate food;//食物位置变量
    Body *Head = Nail;//创建指向蛇头的指针，由于此时蛇只有一节，头尾指向相同
    Body *p;//指向蛇身的指针
    coordinate Nail_before_move;//在蛇身移动之前蛇尾的位置，在吃食物时使用
    int state;
    food = create_food(map);//在地图上创建食物
    while(1)
    {
        Nail_before_move = Nail -> sit;
        Nail = move(Nail, direction);//移动
//        while(Head -> pNext)//使蛇头指针指向正确
//        {
//            Head = Head -> pNext;
//        }
        if(map[Head -> sit.ordinate][Head -> sit.abscissa] == FULL)//若蛇头与蛇身重合，则游戏失败，退出
        {
            printf("You are lost");
            return 0;
        }
        if(map[Head -> sit.ordinate][Head -> sit.abscissa] == FOOD)//若蛇头与食物重合，调用eat函数
        {
            Nail = eat(Nail, Nail_before_move);
            food = create_food(map);//重新创建食物
        }
        p = Nail;
        map_init(map);
        while(p)
        {
            map[p -> sit.ordinate][p -> sit.abscissa] = FULL;
            p = p -> pNext;
        }
        map[food.ordinate][food.abscissa] = FOOD;
        out_map(map);
        if((state = sleep_s(1)))
        {
            switch(state)
            {
                case 's':
                    direction.abscissa = 0;
                    direction.ordinate = 1;
                    break;
                case 'a':
                    direction.abscissa = -1;
                    direction.ordinate = 0;
                    break;
                case 'w':
                    direction.abscissa = 0;
                    direction.ordinate = -1;
                    break;
                case 'd':
                    direction.abscissa = 1;
                    direction.ordinate = 0;
                    break;
                default:;
            }
        }
    }
}