//
// Created by LiuYang on 2019/12/25.
//

#ifndef MYSNAKE_STRUCTS_H
#define MYSNAKE_STRUCTS_H
typedef struct
{
    int abscissa;
    int ordinate;
}coordinate;
typedef struct Node
{
    //蛇身体节点的结构体
    coordinate sit;         /*节点位置*/
    struct Node *pNext; /*指向下一节点的指针*/
}Body;

#endif //MYSNAKE_STRUCTS_H
