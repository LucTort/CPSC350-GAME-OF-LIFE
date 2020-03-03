//https://www.youtube.com/watch?v=fwYlzznrId4

#include "Board.h"

//default constructor
Board::Board()
{
    xLength = 20;

    yWidth = 20;

    currentBoard = new bool*[xLength];
    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            currentBoard[i] = new bool [yWidth];
        }
    }

    //initialize array

    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < yWidth; ++j)
        {
           *(*(currentBoard+i)+j) = false;
        }
        cout << endl;
    }

}

Board::Board(int xSizeInput, int ySizeInput)
{



    xLength = xSizeInput;

    yWidth = ySizeInput;

    currentBoard = new bool*[xLength];
    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            currentBoard[i] = new bool [yWidth];
        }
    }

    //initialize array

    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < yWidth; ++j)
        {
           *(*(currentBoard+i)+j) = false;
        }
        cout << endl;
    }   

}

Board::~Board()
{

}



void Board::printBoard()
    {

    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < yWidth; ++j)
        {

            if (*(*(currentBoard+i)+j))
            {
                cout << "X ";
            } else cout << ". ";
        }
        cout << endl;
    }

    }