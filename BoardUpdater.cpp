#include "Board.h"

//default constructor
BoardUpdater::BoardUpdater()
{

}

void  BoardUpdater::updateBoard(Board& currentBoard, Board& updatedBoard)
{

    int surroundingCells = 0;
    //outer loop
    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < yWidth; ++j)
        {

           //inner loop
           for(int x = -1; x < 2; ++x)
           {
               for(int y = -1; y < 2; ++y)
                {
                    //do stuff
                    if !( 
                    (i + x < 0 )
                    || ( j + y < 0 ) 
                    || (i + x > (xLength - 1 ) )
                    || ( j + y > (yWidth - 1) ) 
                    )
                    {                                                                       
                        if (*(*(currentBoard+x)+y))
                            surroundingCells++;
                    }
                }
           }
           
           *(*(updatedBoard+i)+j) = *(*(currentBoard+i)+j);
        }
        cout << endl;
    }
}

void  BoardUpdater::copyBoard(Board& currentBoard, Board& updatedBoard)
{
    for (int i = 0; i < xLength; ++i)
    {
        for (int j = 0; j < yWidth; ++j)
        {
           *(*(updatedBoard+i)+j) = *(*(currentBoard+i)+j);
        }
        cout << endl;
    }
}

bool IsLive(int surroundingCells, bool currentState)
{
    if (surroundCells >= 4)
        return false;
    else if (surroundCells == 3)
        return true;
    else if (surroundCells >= 2)
        return currentState;
    else 
        return false;
}