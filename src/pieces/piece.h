//
// Created by Logan Gregg on 7/31/2022.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H


class piece {
public:
    piece() {}
private:
    virtual ~piece() = default;
protected:
    virtual bool move() = 0;

};


#endif //CHESS_PIECE_H
