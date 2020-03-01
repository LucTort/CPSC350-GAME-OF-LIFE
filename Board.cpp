#include "Board.h"

//default constructor
Board::Board()
{
    xSize = 20;

    ySize = 20;

    boardArray = new bool [xSize][ySize];



        for(int x = 0; x < 20; ++x)
            for(int y = 0; y < 20; ++y)
                boardArray[x][y] = false;

    cout << boardArray[0][0] << endl;

}

Board::Board(int xSizeInput, int ySizeInput)
{
    bool boardArray[xSizeInput][ySizeInput];

    // sets up board
    for(int x = 0; x < xSizeInput; ++x)
            for(int y = 0; y < ySizeInput; ++y)
                boardArray[x][y] = false;

}

Board::~Board()
{

}

bool Board::updateBoard()
{
    return true;
}

void Board::printBoard()
    {
        //cout << boardArray[0][0] << endl;
        // for(int x = 0; x < xSize; ++x)
        // {
        //     for(int y = 0; y < ySize; ++y)
        //     {
        //         cout << boardArray[x][y];
        //     }
        //     cout << endl;
        // }
    }