#include "BoardUpdater.h"

//default constructor
BoardUpdater::BoardUpdater()
{

}



void  BoardUpdater::UpdateBoard(Board& currentBoard)
{
    int surroundingCells = 0;
    Board *placeholderBoard = new Board(currentBoard.width, currentBoard.height);

    //
    //outer loop                                                                          

     for (int i = 0; i < currentBoard.width; ++i)
     {
         for (int j = 0; j < currentBoard.height; ++j)
         {

           //inner loop
           for(int x = -1; x < 2; ++x)
           {
               for(int y = -1; y < 2; ++y)
                {
                    
                    //cout << (i + x) << " " << (j + y) << endl;  //debugging text
                    // //do stuff
                    if ( ! (
                    (i + x < 0 )
                    || ( j + y < 0 ) 
                    || (i + x > (currentBoard.height - 1 ) )
                    || ( j + y > (currentBoard.width - 1) )
                    || ( ( (j + y) == 0) && ( (x + i) == 0) )
                    ))
                     {      
                        // cout << (i + x) << " " << (j + y) << endl;  //debugging text    

                         // if (*(*(currentBoard.boardArray + x + i) + y + j)
                          if (currentBoard.boardArray[y + j][x + i])//something's messed up here
                          {
                               surroundingCells++;
                          }
                    }//if
                }//for
           }//for

           cout << "[" << (j) << ", " << (i) << "]: " <<surroundingCells << "  ";
            //end inner loop

            placeholderBoard->setCellState(j, i, DoesCellLive(surroundingCells, currentBoard.isCellAlive(j, i) ));
            //cout << surroundingCells << " ";
            surroundingCells = 0;
        
         }//for
     }//for
     CopyBoard(*placeholderBoard, currentBoard);
}//UpdateBoard

void  BoardUpdater::CopyBoard(Board& boardToCopy, Board& boardToUpdate)
{
     for (int i = 0; i < boardToCopy.width; ++i)
    {
        for (int j = 0; j < boardToCopy.height; ++j)
        {
           *(*(boardToUpdate.boardArray+i)+j) = *(*(boardToCopy.boardArray+i)+j);
        }
    }
}

bool BoardUpdater::DoesCellLive(int surroundingCells, bool currentState)
{
    if (surroundingCells >= 4)
        return false;
    else if (surroundingCells == 3)
        return true;
    else if (surroundingCells >= 2)
        return currentState;
    else 
         return false;
}