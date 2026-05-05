#include "Driver.h"
#include "Service.h"
#include <iostream>
using namespace std;
Driver::Driver(string name, string id, string vc, double ratee) : Provider(name, id, ratee)
{
    booking_counter = 0;
    VehicleNumber = vc;
}
Driver::Driver()
{
}
void Driver::Display()
{
    cout << "Driver Name : " << Name << "  |  " << " ID : " << ProviderID << "  |  " << " Vehicle Number : " << VehicleNumber << "  |  " << " Rate : " << rate << endl;
}
string Driver::name_getter()
{
    return Name;
}
string Driver::id_getter()
{
    return ProviderID;
}
string Driver::vc_getter()
{
    return VehicleNumber;
}
void Driver::assign_job(Service *ride)
{
    if (booking_counter >= 10)

    {
        cout << "Ride limit reached!" << endl;
        return;
    }
    rides[booking_counter] = ride;
    booking_counter++;
}
bool Driver ::CheckAvailability(string datetime)
{
    bool check = 1;
    for (int i = 0; i < booking_counter; i++)
    {
        if (datetime == rides[i]->datetime_getter())
        {
            check = 0;
        }
        if (check == 0)
        {
            break;
        }
    }

    return check;
}

void Driver::PrintDetails()
{
    for (int i = 0; i < booking_counter; i++)
    {
        cout << "Job " << i << " " << " at " << rides[i]->datetime_getter() << endl;
    }
}

void Driver::Show_Surge()
{
    cout << "Your current surge status is : " << (surge ? "ON" : "OFF") << '\n';
}
void Driver::toggle_Surge()
{

    if (surge == 0)
    {
        cout << "SURGE RATES TOGGLED ON ";
        surge = 1;
    }
    else
    {
        cout << "SURGE RATES TOOGLED OFF";
        surge = 0;
    }
}
bool Driver::surge_getter()
{
    return surge;
}