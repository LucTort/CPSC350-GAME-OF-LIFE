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

     for (int xBoard = 0; xBoard < currentBoard.width; ++xBoard)
     {
         for (int yBoard= 0; yBoard < currentBoard.height; ++yBoard)
         {
           //inner loop
           for(int xLocal = -1; xLocal < 2; ++xLocal)
           {
               for(int yLocal = -1; yLocal < 2; ++yLocal)
                {
                    if (currentBoard.isInBounds((xBoard + xLocal), (yBoard + yLocal))) 
                    {      
                       surroundingCells += currentBoard.isCellAlive( (xBoard + xLocal) , (yBoard + yLocal) ) ;
                       //cout << currentBoard.isCellAlive( (xBoard + xLocal) , (yBoard + yLocal) ) << " ";
                    }//if
                
                }//for
                //cout << endl;
                
           }//for
           //cout << endl << endl;


            //end inner loop

            surroundingCells -= currentBoard.isCellAlive(xBoard , yBoard);//subtracts from number of cells if the starting cell is alive
            placeholderBoard->setCellState(xBoard, yBoard, DoesCellLive(surroundingCells, currentBoard.isCellAlive(xBoard, yBoard) ));

            //cout << "Surrounding Cells:" << surroundingCells << endl;

            surroundingCells = 0;
         }//for
         surroundingCells = 0;
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
    //cout << surroundingCells << " ";

    if (surroundingCells >= 4)
        return false;
    else if (surroundingCells == 3)
        return true;
    else if (surroundingCells >= 2)
        return currentState;
    else 
         return false;
}