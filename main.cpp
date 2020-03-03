#include "Board.cpp"
#include "BoardUpdater.h"

using namespace std;

int main(int argc, char **argv)
{
    Board *myBoard = new Board(3, 5);
    Board *anotherBoard = new Board(3, 5);

    BoardUpdater *boardUpdater = new BoardUpdater();

    boardUpdater->UpdateBoard(myBoard, anotherBoard);

    myBoard->printBoard();

    //delete myBoard;

    //cout << myTestArray[0][1] << endl;

    return 0;
}