// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <stdio.h>
#include <iostream>

using namespace emscripten;

bool isCompleteLine(val board_values, val object_block) {
    //go through all the columns in the last row and check if they have an object
    for (int col = 0; col < 10; col++) {
        if(board_values[19][col] != object_block) {
            return false;
        }
    }
    return true;
}

bool isGameOver(val board_values, val empty_block) {
     //go through all the columns in the first row and check if they have an object
    for (int col = 0; col < 10; col++) {
        if(board_values[0][col] != empty_block) {
            return false;
        }
    }
    return true;
}

bool generateTetrimino() {
    return true;
}

val tetris() {
    printf("MyFunction Called\n");
    val board_values = val::global("BoardValues");
    val empty_block = val::global("emptyBlock");
    val object_block = val::global("objectBlock");

    val collapse_board = val::global("collapseBoardLabel");
    val generate_piece = val::global("generatePieceLabel");
    val game_over = val::global("gameOverLabel");

    if (isCompleteLine(board_values, object_block)) {
       return collapse_board;
    } 
    if (generateTetrimino()) {
        return generate_piece;
    }
    if (isGameOver(board_values, empty_block)) {
        return game_over;
    }

}

EMSCRIPTEN_BINDINGS(my_module) {
    function("tetris", &tetris);
}

