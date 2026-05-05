#include "HomeServices.h"
#include <iostream>
using namespace std;
#include "User.h"

HomeService::HomeService(string id, string dt, User *u, ServiceProvider *sp, string type) : Service(id, dt, u)
{
    ServiceType = type;
    provider = sp;
}

double HomeService ::CalculateCost()
{
    return ((provider->rate_getter()));
}

void HomeService::PrintDetails()
{
    cout << "Service Type : " << ServiceType << " provided by : " << provider->getter_provider_name() << " at the rate of " << provider->rate_getter() << " total : " << CalculateCost() << " Rs " << endl;
}
