#include <iostream>
using namespace std;

class BoardUpdater
{
    public:
        BoardUpdater(); //default constructor
        ~Board(); //destructor

        void UpdateBoard(Board& currentBoard, Board& updatedBoard);
        void CopyBoard(Board& currentBoard, Board& updatedBoard);
};