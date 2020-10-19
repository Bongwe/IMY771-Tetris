// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <stdio.h>
#include <iostream>

using namespace emscripten;

val tetris() {
    printf("MyFunction Called\n");
    val board_values = val::global("BoardValues");
    val no_winner_label = val::global("noWinnerLabel");
    val empty_block = val::global("emptyBlock");
    val object_block = val::global("objectBlock");

    // for (int row = 0; row < 10; row++) {
    //     for (int col = 0; col < 10; col++) {
    //         board_values[row][col] = val("0");
    //         printf("awe");
    //     }
    // }

    // board_values[0][5] = val("1");
    // int tetrimino[20][10];
    
    // for (int row = 0; row < 20; row++) {
    //     for (int col = 0; col < 10; col++) {
    //         board_values[row][col] = empty_block;
    //     }
    // }


    // int count_part1 = 0;
    // int count_part2 = 1;

    // // #
    // //###
    // board_values[0][5] = '1';
    // board_values[1][4] = object_block;
    // board_values[1][5] = object_block;
    // board_values[1][6] = object_block;

    //printf(object_block);
    //printf(object_block["key"].as<std::string>());
//std::cout << object_block["key"].as<std::string>(); 

    // tetrimino[count_part1][5] = 0;
    // tetrimino[count_part2][4] = 0;
    // tetrimino[count_part2][5] = 0;
    // tetrimino[count_part2][6] = 0;

    // count_part1++;
    // count_part2++;
    // tetrimino[count_part1][5] = 1;
    // tetrimino[count_part2][4] = 1;
    // tetrimino[count_part2][5] = 1;
    // tetrimino[count_part2][6] = 1;

    // for (int row = 0; row < 20; row++) {
    //     for (int col = 0; col < 10; col++) {
    //         if (tetrimino[row][col] == 1) {
    //             gameBoard[row][col] = tetrimino[row][col];
    //         }
    //         if (gameBoard[row][col] == 1 && tetrimino[row][col] == 0) {
    //             gameBoard[row][col] = 0;
    //         }
    //     }
    // }
     return no_winner_label;
}


EMSCRIPTEN_BINDINGS(my_module) {
    function("tetris", &tetris);
}

