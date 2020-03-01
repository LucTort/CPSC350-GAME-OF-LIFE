#include "Board.cpp"

using namespace std;

int main(int argc, char **argv)
{
    Board *myBoard = new Board();

    // bool myTestArray[3][3];

    // bool myTestArray[3][4]; 
//     = {  
//    {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
//    {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
//    {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
// };

    myBoard->printBoard();

    //delete myBoard;

    //cout << myTestArray[0][1] << endl;

    return 0;
}