//Coin Tosser Simulator
// A class is made that has a string named sideUp. This string member variable
//holds either heads or tails
//a void function named toss is built that simulates the tossing of a coin.
//The program uses a loop to simulate a coin being tossed 20 times and counts 
//how many times heads or tails sideup


#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>

using namespace std;

class Coin
{
    private:
        string sideup;
    
    public:
        //coin (string heads, string tails)//{
            //int iSecret, iGuess;

        //void coin(string);
        void coin ();
        void Toss();
        string getSideup()
        {
            return sideup;
        }
};
//iguess should be used to determine if it matches the coin sideUp
void Coin::coin()
{
    int iSecret;// iGuess;
    string heads;
    string tails;

    //srand(time(NULL)); //initializing random seed

    iSecret = rand() % 2 + 1; //random number between one and two

    if (iSecret == 1)
    {
        sideup = "heads";
    }
    else
    {
        sideup = "tails";
    }
    
}
void Coin::Toss()
{
    int iGuess;

    
    iGuess = rand() % 2 + 1;

    if (iGuess == 1)
    {
        sideup = "heads";
    }
    else
    {
        sideup = "tails";
    }
}

int main()
{
    srand(time(NULL));
    Coin test;
    int tester = 0;
    int countTails = 0;
    int countHeads = 0;

    cout << "Welcome to Judith's Dice Toss" << endl;

    for (int i = 0; i < 20; i++)
    {
        test.Toss();
        if (test.getSideup() == "heads")
        {
            countHeads += 1;
        }
        else
        {
            countTails += 1;
        }
        
        tester = rand() % 2 + 1;
        cout << tester;
    }
    cout << endl;
    cout << "Number of Heads: " << countHeads << "     ";
    cout << "Number of Tails: " << countTails << endl;

}