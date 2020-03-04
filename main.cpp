// #include "Board.cpp"
#include "BoardUpdater.cpp"

using namespace std;

int main(int argc, char **argv)
{
    Board *myBoard = new Board();

    BoardUpdater *boardUpdater = new BoardUpdater();

    for(int i = 0; i < 3; ++i)
    {
        myBoard->printBoard();

        boardUpdater->UpdateBoard(*myBoard);
    }




    //delete myBoard;

    //cout << myTestArray[0][1] << endl;

    return 0;
}