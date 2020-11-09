
#include <iostream>
using namespace std;

class Car
{
    private:
        int yearModel;
        string make;
        int speed;
    public:
       // Car(int m, string ma);
       /* void setYearModel(int);
        void setMake(string);
        void setSpeed(int);*/
        Car(int mod, string mak, int sped = 0)
        {
            yearModel = mod;
            make = mak;
            speed = sped;
        }

        int getYearModel() const
            {   return yearModel; }
        
        string getMake() const
            {   return make; }
        
        int getSpeed() const
        {   return speed; }
        
        int getAccelerate() const
        {   return speed + 5; }

        int getBrake() const
        {   return speed - 5; }

};


int main()
{
    int model1, speed1;
    string make1;
    int current_sped = 0;
    int decrease_sped = 0;

    cout << "What is the car make? [string] : ";
    cin >> make1;

    cout << " what is the model of the car? [number]: ";
    cin >> model1;

    Car test(model1, make1);

    for (int x = 0; x < 5; x++)
    {
        current_sped += test.getAccelerate();
        cout << current_sped << " ";
    }
    //decrease_sped = current_sped;
    cout << decrease_sped << " ";
   for (int i = 0; i < 5; i++)
    {
        //decrease_sped = 
        decrease_sped  += test.getBrake();
        cout << decrease_sped << " ";
    }

}