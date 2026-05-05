#include "ServiceProvider.h"
#include "Service.h"
#include <iostream>
using namespace std;
// ServiceProviders
ServiceProvider::ServiceProvider()
{
}
void ServiceProvider::Display()
{
    cout << "Service Provider Name : " << Name << " | ID : " << ProviderID << " | Service Type : " << ServiceType << " | Rate : " << rate << endl;
}
ServiceProvider::ServiceProvider(string name, string id, string st, double ratee) : Provider(name, id, ratee)
{
    booking_counter = 0;
    ServiceType = st;
}
string ServiceProvider::type_getter()
{
    return ServiceType;
}

void ServiceProvider::assign_appointment(Service *app)
{
    if (booking_counter >= 10)
    {
        cout << "Appointment limit reached!" << endl;
        return;
    }
    appointments[booking_counter] = app;
    booking_counter++;
}
bool ServiceProvider ::CheckAvailability(string datetime)
{
    bool check = 1;
    for (int i = 0; i < booking_counter; i++)
    {
        if (datetime == appointments[i]->datetime_getter())
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
void ServiceProvider::PrintDetails()
{
    for (int i = 0; i < booking_counter; i++)
    {
        cout << "Job " << i << " " << " at " << appointments[i]->datetime_getter() << " For Rs " << rate << endl;
    }
}