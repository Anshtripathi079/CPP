#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    string name;
    int wheelcount;

public:
    void getdata()
    {
        cout << "Name of the vehicle ? ";
        cin >> name;
        cout << "Wheels ? ";
        cin >> wheelcount;
    }
    void displaydata()
    {
        cout << "Name of the vehicle: " << name << endl;
        cout << "Wheels: " << wheelcount << endl;
    }
};
class Lightmotor : public Vehicle
{
protected:
    int speedlimit;

public:
    void getdata()
    {
        Vehicle::getdata();
        cout << "Speed limit ? ";
        cin >> speedlimit;
    }
    void displaydata()
    {
        Vehicle::displaydata();
        cout << "Speed limit : " << speedlimit << endl;
    }
};
class Heavymotor : public Vehicle
{
protected:
    int LoadCapacity;
    string permit;

public:
    void getdata()
    {
        Vehicle::getdata();
        cout << "Load carrying capacity? ";
        cin >> LoadCapacity;
        cout << "Permit type? ";
        cin >> permit;
    }
    void displaydata()
    {
        Vehicle::displaydata();
        cout << "Load carrying Capacity: " << LoadCapacity << endl;
        cout << "Permit: " << permit << endl;
    }
};
class Gearmotor : public Lightmotor
{
protected:
    int gearcount;

public:
    void getdata()
    {
        Lightmotor::getdata();
        cout << "No. of Gears ? ";
        cin >> gearcount;
    }
    void displaydata()
    {
        Lightmotor::displaydata();
        cout << "Gears: " << gearcount << endl;
    }
};
class Nongearmotor : public Lightmotor
{
public:
    void getdata()
    {
        Lightmotor::getdata();
    }
    void displaydata()
    {
        Lightmotor::displaydata();
    }
};
class Passenger : public Heavymotor
{
protected:
    int sitting;
    int standing;

public:
    void getdata()
    {
        Heavymotor::getdata();
        cout << "Max seats? ";
        cin >> sitting;
        cout << "Max standing? ";
        cin >> standing;
    }
    void displaydata()
    {
        Heavymotor::displaydata();
        cout << "Max seats: " << sitting << endl;
        cout << "Max standing: " << standing << endl;
    }
};
class Goods : public Heavymotor
{
public:
    void getdata()
    {
        Heavymotor::getdata();
    }
    void displaydata()
    {
        Heavymotor::displaydata();
    }
};
int main()
{
    Gearmotor veh1;
    Passenger veh2;
    cout << "Enter data for gear motor vehicle ... " << endl;
    veh1.getdata();
    cout << "Enter data for passenger motor vehicle ... " << endl;
    veh2.getdata();
    cout << "Data of gear motor vehicle ... " << endl;
    veh1.displaydata();
    cout << "Data of passenger motor vehicle ... " << endl;
    veh2.displaydata();
}