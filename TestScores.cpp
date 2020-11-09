#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class TestScores
{
    private:
        double testScores1,
               testScores2,
               testScores3;

    public:
        void getTestScores1()
        {
            //getline(cin, description);
            cin >> testScores1;
        }

        void getTestScores2()
        {
            //getline(cin, description);
            cin >> testScores2;
        }

        void getTestScore3()
        {
            cin >> testScores3;
        }

        int DisplayTestScoresAverage()
        {
            return (testScores1 + testScores2 + testScores3) / 3;
        }
};

int main()
{
    TestScores scores;

    cout << "Enter Test score #1: ";
    scores.getTestScores1();
    
    cout << "Enter Test score #2: ";
    scores.getTestScores2();
    
    cout << "Enter Test scores #3: ";
    scores.getTestScore3();

    cout << "The average Test scores for the three test is " 
        << scores.DisplayTestScoresAverage() << endl;
}
