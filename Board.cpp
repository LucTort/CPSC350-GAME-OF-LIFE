//https://www.youtube.com/watch?v=fwYlzznrId4

#include "Board.h"

//default constructor
Board::Board()
{

    int **boardArray;

    rows = 20;

    column = 20;

    p = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            p[i] = new int [column];
        }
    }

    //initialize array

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
           *(*(p+i)+j) = 1;
        }
        cout << endl;
    }

    //print array

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << *(*(p+i)+j) << " ";
        }
        cout << endl;
    }

    

    // cout << boardArray[0][0] << endl;

}

Board::Board(int xSizeInput, int ySizeInput)
{
    // bool *boardArrayX[xSizeInput];

    // for(int x = 0; x < xSizeInput; ++x)
    // {
    //     boardArray[x] = new bool[ySizeInput];
    // }

    // bool **boardArray;
    // board = new bool* [ySizeInput];

    // for(int y = 0; y < ySizeInput; ++y)
    // {
    //             boardArray[y] = new bool[xSizeInput];
    // }     

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