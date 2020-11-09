//This program determines the monthly payment on a home mortage using Classes
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace std;

class MortgagePayment
{
    private:
        float   loanAmount;
        float   interestRate;
        double  loanYear;
        double Payment;

    public:
        void setLoan(float);
        void setInterestRate(float);
        void setLoanYear(float);
        void setPayment(float, float, float);

        float getPaymentAmount() const
            { return Payment;}
}; 
void MortgagePayment::setLoan(float l)
{
    if (l > 0)
    {
        loanAmount = l;
    }
    else
    {
        cout << "Negative number is not Valid!";
        exit (EXIT_FAILURE);
    }
    
}
void MortgagePayment::setPayment( float l, float i, float y)
{
    loanAmount = l;
    interestRate = i;
    loanYear = y;
    float term, term1;
    float year1;
    year1 = 12 * loanYear;
    term1 = (1 + (interestRate/12));
    term = pow(term1, year1);

    Payment = (loanAmount * (interestRate/12) * term) / (term - 1);
}

int main()
{
    float loan, rate, years;

    MortgagePayment Plan;

    cout << "Enter amount to loan";
    cin >> loan;
    Plan.setLoan(loan);
    rate = 0.024;

    cout << "How many Years?" << endl;
    cin >> years;
    
    Plan.setPayment(loan, rate, years);

    cout << "The monthly payment is " << Plan.getPaymentAmount() << endl;
    cout << "The total Paid to the bank at the end of the loan period is ";
    cout << Plan.getPaymentAmount() * years << endl;



}

