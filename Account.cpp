
//This is a practice for a class implementation
//this program uses Date entered to save and print out a date output the date

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;
        //string year;
    public:
        Date(int, int, int);
        void setDay(int);
        void setMonth(int);
        void setYear(int);

        int getDay() const
            { return day; }
        int getMonth() const
            { return month; }
        int getYear() const
            { return year; }

};
Date::Date(int d, int m, int y)
{
    day   = d;
    month = m;
    year  = y;
}
//Setting dates
void  Date::setDay(int d)
{
    if ( d > 0  || d < 31)
    {
        day = d;
    }
    else
    {
        cout << "Invalid entry\n";
        exit(EXIT_FAILURE);
    }
    
}
//Setting months
void Date::setMonth(int m)
{
    if (m > 0  && m < 13)
        month = m;
    else
    {
        cout << "Invalid entry\n";
        exit (EXIT_FAILURE);
    }
}
void Date::setYear(int y)
{
    if (y > 0 && y < 12)
        year = y;
    else
    {
        cout << "Invalid entry\n";
        exit(EXIT_FAILURE);
    }
    
}

int main()
{
    int testDay,
        testMonth,
        testYear;
    string months[12] = {"January","Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //Get day
    cout << "Enter a valid day: ";
    cin  >> testDay;
    //get month
    cout << "Enter a valid month: ";
    cin  >> testMonth;
    //get year
    cout << "Enter a valid year: ";
    cin  >> testYear;

    //creat a date class
    Date test(testDay, testMonth, testYear);

    //Displaying date
    cout << setprecision(2) << fixed;
    cout << test.getDay() << "/" << test.getMonth() << "/" << test.getYear() << "\n";
    cout << months[test.getMonth()-1] << " " << test.getDay() << ", " << test.getYear() << "\n";
    cout << test.getDay() << " " << months[test.getMonth()-1] << " " << test.getYear() << "\n";

    return 0;

}