cmake_minimum_required(VERSION 3.15)
project(mySnake C)

set(CMAKE_C_STANDARD 99)

add_executable(mySnake main.c create.c structs.h sleep.c game.c create_food.c define.h move.c map.c functions.h eat.c)