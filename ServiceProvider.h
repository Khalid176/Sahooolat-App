#ifndef SERVICEPROVIDER_H
#define SERVICEPROVIDER_H
#include "Provider.h"


class Service; // forward declaration


class ServiceProvider : public Provider
{
    string ServiceType;
    Service *appointments[10];

public:
    ServiceProvider();
    ServiceProvider(string name, string id, string st, double ratee);
    bool CheckAvailability(string datetime) override;
    void assign_appointment(Service *ride);
    void PrintDetails() override;
    void Display();
    string type_getter();
};

#endif