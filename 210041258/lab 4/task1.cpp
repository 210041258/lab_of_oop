#include<iostream>
using namespace std;

// OOP class
class Flight
{
private :
// private data
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;

public :
    Flight(int flightNum=0,string dest="",int dist=0,float maxFuel =0.0)
    {
        flightNumber=flightNum;
        destination=dest;
        distance=dist;
        maxFuelCapacity=maxFuel;
    }
// public functions that can access to your private sesstion inside the app of class
    float CalFuel ()
    {

        if(distance<=1000&&maxFuelCapacity>=500)
        {
            maxFuelCapacity=500;
            return maxFuelCapacity;
        }
        else if(distance>1000&&distance<=2000&&maxFuelCapacity>=1100)
        {
            maxFuelCapacity=1100;
            return maxFuelCapacity;
        }
        else if (distance>2000&&maxFuelCapacity>=2200){
            maxFuelCapacity=2200;
            return maxFuelCapacity;
        }
    }

    void ShowInfo()
    {
        cout << "The flight Number : " << flightNumber << endl;
        cout << "The flight destination : " << destination << endl;
        cout << "The flight distance : " << distance << endl;
        cout << "The flight maxFuel : " << CalFuel() << endl;
    }


// deconstractor
    ~Flight()
    {
        cout << "\n the destruction of the flight " << destination << endl ;
        cout << " the Number of the flight " << flightNumber << endl ;
    }
};


void start_program()
{
// start your program here
    Flight f1(1234,"gaza",2500,1100.0);
    f1.ShowInfo();
}



int main()
{
    start_program();
    return 0;
}
