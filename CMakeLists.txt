cmake_minimum_required(VERSION 3.13)
project(chess)

set(CMAKE_CXX_STANDARD 11)

add_executable(chess src/main.cpp src/BoardDisplay.h src/players/player.cpp src/players/player.h src/pieces/piece.cpp src/pieces/piece.h src/pieces/king.cpp src/pieces/king.h src/pieces/queen.cpp src/pieces/queen.h src/pieces/knight.cpp src/pieces/knight.h src/pieces/bishop.cpp src/pieces/bishop.h src/pieces/rook.cpp src/pieces/rook.h src/pieces/pawn.cpp src/pieces/pawn.h src/game.cpp src/game.h src/board.cpp src/board.h src/BoardSpace.cpp src/BoardSpace.h)
