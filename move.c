//
// Created by LiuYang on 2019/12/25.
//
#include "define.h"
#include "structs.h"

Body *move(Body *Nail, coordinate dir)
{
    Body *p = Nail;
    while(p -> pNext)//除蛇头外，其余的蛇身位置变为其前一节蛇身的位置
    {
        p -> sit = (p -> pNext) -> sit;
        p = p -> pNext;
    }
    //此时p指向蛇头
    //蛇头根据所给方向进行移动
    p -> sit.abscissa += dir.abscissa;
    p -> sit.ordinate += dir.ordinate;

    if(p -> sit.abscissa < 0)
    {
        p -> sit.abscissa += LENGTH;
    }
    else if(p -> sit.abscissa >= LENGTH)
    {
        p -> sit.abscissa -= LENGTH;
    }

    if(p -> sit.ordinate < 0)
    {
        p -> sit.ordinate += WIDTH;
    }
    else if(p -> sit.ordinate >= WIDTH)
    {
        p -> sit.ordinate -= WIDTH;
    }
    return Nail;
}