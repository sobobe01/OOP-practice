//This program shows the prices and items in a retail store.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class retailItem
{
    private:
        string description;
        int    unitsOnHand;
        double price;

    public:
        void getDescription()
        {
            getline(cin, description);
        }

        void getUnitsOnHand()
        {
            cin >> unitsOnHand;
        }

        void getPrice()
        {
            cin >> price;
        }
        void displayInfo()
        {
            cout << setw(20) << description;
            cout << setw(8) << unitsOnHand;
            cout << setw(7) << price;
            cout << endl;
        }
};

int main()
{

    retailItem retail[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Item #" << i+1 << " " << "description: ";
        //cout << "description: ";
        retail[i].getDescription();
        //cin >> desc;
        //cin.ignore();
        cout << "Enter units on hand: ";
        retail[i].getUnitsOnHand();
        
        cout << "Enter price: ";
        retail[i].getPrice();
        cin.ignore();
    }

    cout << setw(14) << "Item"
         << setw(14)  << "Decription" << setw(8) << "Units On Hand" << setw(8)
         << setw(16) << "Price \n";
    cout << "---------------------------------------------\n";

    for (int x = 0; x < 3; x++)
    {
        cout << setw(8) << "Item #" << x + 1;
        retail[x].displayInfo();
    }
}
