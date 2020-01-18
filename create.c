//
// Created by LiuYang on 2019/12/25.
// create.h
// 创建蛇身，返回指向蛇尾的指针（头节点）
//

#include <stdlib.h>
#include "structs.h"
#include "define.h"

Body *create(void)
{
    Body *Tail = (Body *)malloc(sizeof(Body));
    Tail -> pNext = NULL;
    Tail -> sit.ordinate = WIDTH / 2;
    Tail -> sit.abscissa = LENGTH / 2;
    return Tail;
}