//
// Created by Logan Gregg on 8/1/2022.
//

#ifndef CHESS_BOARDSPACE_H
#define CHESS_BOARDSPACE_H

// Include all the piece objects' header files


class BoardSpace {
    //Constructor
    BoardSpace()
    {

    }

    //Destructor
    ~BoardSpace()
    {

    }

};

//Pass in a board space -- eventually pass in a specific piece object here
//  and overwrite the text by going through a switch-case statement
BoardSpace* SetSpace(BoardSpace* space)
{
    return space;
}

#endif //CHESS_BOARDSPACE_H
