//
// Created by Logan Gregg on 8/1/2022.
//

#ifndef CHESS_BOARDSPACE_H
#define CHESS_BOARDSPACE_H

// Include all the piece objects' header files
#include "pieces/piece.h"
#include "pieces/bishop.h"
#include "pieces/king.h"
#include "pieces/knight.h"
#include "pieces/pawn.h"
#include "pieces/queen.h"
#include "pieces/rook.h"

class BoardSpace {
    public:
        //Constructor
        BoardSpace()
        {

        }

        //Destructor
        ~BoardSpace()
        {

        }

        //Pass in a board space -- eventually pass in a specific piece object here
        //  and overwrite the text by going through a switch-case statement
        BoardSpace* SetSpace(BoardSpace* space, Piece piece);
    private:
};

#endif //CHESS_BOARDSPACE_H
