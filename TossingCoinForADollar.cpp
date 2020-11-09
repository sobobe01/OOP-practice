//in this game, there are three instances of the class Coin (Quarter, Dime, Nickel)
//when the coin is tossed, as long as its a head side up on the coin, the value is added to the balance
//that is, if it is a quarter, then .25 cents is added to the balance
//the game continues until the balance is equal to or excceds 1 dollar
//the winner is declared if the balance is exactly one dollar.


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
    Coin Quarter;
    Coin Nickel;
    Coin Dime;

    //int tester = 0;
    double quarters = 0;
    double dimes = 0;
    double nickels = 0;
    float balance = 0;

    cout << "Welcome to Judith's Dice Toss" << endl;

    do
    {
        Quarter.Toss();
        Dime.Toss();
        Nickel.Toss();
        
        if (Quarter.getSideup() == "heads")
        {
            quarters += 0.25;
        }

        if (Dime.getSideup() == "heads")
        {
            dimes += 0.10;
        }
        
        if (Nickel.getSideup() == "heads")
        {
            nickels += 0.05;
        }

        balance = quarters + dimes + nickels;

    }while (balance < 1);

    if (balance == 1)
    {
        cout << "YOU WIN!!" << endl;
    }
    else
    {
        cout << "YOU LOSE! value exceeds $1" << endl;
    }
    

}