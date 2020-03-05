// #include "Board.cpp"
#include "ReadFile.cpp"

using namespace std;

int main(int argc, char **argv)
{
    Board *myBoard = new Board();

    BoardUpdater *boardUpdater = new BoardUpdater();

    ReadFile *myReadFile = new ReadFile();
    // myReadFile->argRead(int, char**);
    myReadFile->option();

    // for(int i = 0; i < 3; ++i)
    // {
    //     myBoard->printBoard();
    //
    //     boardUpdater->UpdateBoard(*myBoard);
    // }




    //delete myBoard;

    //cout << myTestArray[0][1] << endl;

    return 0;
}
