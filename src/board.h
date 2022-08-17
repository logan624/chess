//
// Created by Logan Gregg on 8/1/2022.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "BoardSpace.h"
#include <iostream>

enum BoardColumn{
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H
};

class board {
public:
    board()
    {
        //Fill the board with pieces and empty squarees, where appropriate
    }
private:
    BoardSpace spaces[8][8];
};

void testBoardSpace()
{
    knight kni;
    BoardSpace* space = new BoardSpace();
    // space->SetSpace(space, &kni);
}

#endif //CHESS_BOARD_H
