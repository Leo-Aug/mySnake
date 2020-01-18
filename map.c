//
// Created by LiuYang on 2019/12/25.
// 地图相关的函数

#include <stdio.h>
#include "define.h"
#include "structs.h"
#include <windows.h>

void out_map(char map[WIDTH][LENGTH])
{
    int i, j;
    system("cls");

    for(i = 0;i < WIDTH;i++)
    {
        for(j = 0;j < LENGTH;j++)
            printf("%c", map[i][j]);
        printf("\n");
    }
}

void map_init(char map[WIDTH][LENGTH])
{
    int i, j;
    for(i = 0;i < WIDTH;i++)
    {
        for(j = 0;j < LENGTH;j++)
            map[i][j] = EMPTY;
    }
}