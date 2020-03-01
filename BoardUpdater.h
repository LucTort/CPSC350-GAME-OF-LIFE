#include <iostream>
#include "Board.cpp"
using namespace std;

class BoardUpdater
{
    public:
        BoardUpdater(); //default constructor
        ~BoardUpdater(); //destructor

        void UpdateBoard(Board&, Board&);
        void CopyBoard(Board&, Board&);
        bool IsLive(int, bool);
};