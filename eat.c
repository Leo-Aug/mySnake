//
// Created by LiuYang on 2020/1/17.
// eat函数，在蛇需要吃食物时，创建新蛇尾并接入蛇身
//

#include "structs.h"
#include <stdlib.h>

Body *eat(Body *Nail, coordinate Nail_befmov)
{
    Body *p = (Body *)malloc(sizeof(Body));//创建新蛇尾
    p -> sit = Nail_befmov;
    p ->pNext = Nail;           /*将蛇尾接入*/
    Nail = p;
    return Nail;
}