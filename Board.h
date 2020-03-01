#include <iostream>
using namespace std;

class Board 
{
    public:
        Board(); //default constructor
        Board(int xSize, int ySize); //overloaded constructor
        ~Board(); //destructor
        //functions
        bool updateBoard();   //updatesBoard to next configuration. Returns true if board was static

        //helper functions
        void printBoard();

        int xLength;

        int yWidth;

        bool **currentBoard;
};