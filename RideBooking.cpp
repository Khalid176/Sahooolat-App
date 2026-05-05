#include "RideBooking.h"
#include <iostream>
#include "User.h"
class User;

RideBooking::RideBooking(string id, string dt, User *u, Driver *d, double dist, bool surge) : Service(id, dt, u)
{
    driver = d;
    Distance = dist;
    SurgePricing = surge;
}
double RideBooking::CalculateCost()
{
    if (SurgePricing == 1)
    {
        return (Distance * driver->rate_getter()) * 1.25;
    }
    else
    {
        return Distance * driver->rate_getter();
    }
}
void RideBooking::PrintDetails()
{
    cout << "Ride with " << driver->getter_provider_name() << " of distance " << Distance << " booked for RS " << CalculateCost() << endl;
}