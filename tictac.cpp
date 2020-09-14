#include <iostream>
#include <iostream>

using namespace std;

#define PERSON1 1
#define PERSON2 2

#define SIDE 3 //Length of the board

//PERSON1 would move with 'O'
//and PERSON2 would move with 'X'

#define person1Move 'O'
#define person2Move 'X'

void showBoard(char board[][SIDE])
{
    printf("\n\n");

    printf("\t\t\t  %c  |   %c  |   %c  \n", board[0][0], board[0][1], 
                                                board[0][2]);
    printf("\t\t\t-----------------\n");
    printf("\t\t\t  %c  |   %c  |   %c  \n", board[1][0],board[1][1],board[1][2]);
    printf("\t\t\t-----------------\n");
    printf("\t\t\t  %c  |   %c  |   %c  \n", board[2][0], board[2][1], 
                                                board[2][2]);

    return;
}

//A function to start the game
void start(char board[][SIDE], int moves[])
{
    //initializing random generator
    //srand(time(NULL))

    for (int i = 0; i < SIDE; i++)
    {
        for (int x = 0; x < SIDE; x++)
        {
            board[i][x] = ' ';
        }
    }

    for (int i = 0; i < SIDE * SIDE; i++)
        moves[i] = i;
    
   // random_shuffle(moves, moves + SIDE*SIDE);
   return;
}
void Winner(int whoseTurn)
{
    if (whoseTurn == PERSON1)
        cout << "PERSON ONE HAS WON" << endl;
    else
        cout << "PERSON TWO HAS WON" << endl;
    return;
}

//acting for a match across the row
bool rowMatch(char board[][SIDE]) 
{ 
    for (int i=0; i<SIDE; i++) 
    { 
        if (board[i][0] == board[i][1] && 
            board[i][1] == board[i][2] &&  
            board[i][0] != ' ') 
            return (true); 
    } 
    return(false); 
} 
// is crossed with the same player's move 
bool columnMatch(char board[][SIDE]) 
{ 
    for (int i=0; i<SIDE; i++) 
    { 
        if (board[0][i] == board[1][i] && 
            board[1][i] == board[2][i] &&  
            board[0][i] != ' ') 
            return (true); 
    } 
    return(false); 
} 
//Match
bool diagonalMatch(char board[][SIDE]) 
{ 
    if (board[0][0] == board[1][1] && 
        board[1][1] == board[2][2] &&  
        board[0][0] != ' ') 
        return(true); 
          
    if (board[0][2] == board[1][1] && 
        board[1][1] == board[2][0] && 
         board[0][2] != ' ') 
        return(true); 
  
    return(false); 
} 

bool gameOver(char board[][SIDE]) 
{ 
    return(rowMatch(board) || columnMatch(board) 
            || diagonalMatch(board) ); 
} 


 


