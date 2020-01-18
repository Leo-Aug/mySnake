//
// Created by LiuYang on 2019/12/25.
// 延时函数，输入秒数，程序在此函数内停留所输入的时间
// 延时过程中，若出现用户操作输入'w', 'a', 's', 'd'内的任一值，则返回该值
//

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

short sleep_s(int iTime)
{
    time_t begin;
    time_t now;
    short state = 0;
    time(&begin);

    while(time(&now) < begin + iTime)
    {
        if(kbhit())
            state = (short)getch();
    }
    return state;
}