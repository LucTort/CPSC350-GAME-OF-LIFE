//https://www.youtube.com/watch?v=fwYlzznrId4
//https://www.cplusplus.com/reference/cstdlib/rand/

#include "Board.h"

//default constructor
Board::Board()
{
    height = 20;

    width = 20;

    boardArray = new bool*[height];
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            boardArray[i] = new bool [width];
        }
    }

    //initialize array

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
           *(*(boardArray+i)+j) = rand() % 2;//random cells
        }
        cout << endl;
    }

}

Board::Board(int xSizeInput, int ySizeInput)
{



    height = xSizeInput;

    width = ySizeInput;

    boardArray = new bool*[height];
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            boardArray[i] = new bool [width];
        }
    }

    //initialize array

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
           *(*(boardArray+i)+j) = rand() % 2;//random cells
        }
        cout << endl;
    }   

}

Board::~Board()
{

}



void Board::printBoard()
    {

        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {

                if (*(*(boardArray+i)+j))
                {
                    cout << "X ";
                } else cout << ". ";
            }
            cout << endl;
        }

        cout << endl;

    }

    bool Board::isCellAlive(int xPosition, int yPosition)
    {
        return boardArray[xPosition][yPosition];//(*(*(boardArray + yPosition) + xPosition));
    }

    void Board::setCellState(int xPosition, int yPosition, bool isAlive)
    {
        boardArray[xPosition][yPosition] = isAlive;//*(*(boardArray + yPosition ) + xPosition ) = isAlive;
    }

    bool Board::isInBounds(int xPosition, int yPosition)
    {
        
    }