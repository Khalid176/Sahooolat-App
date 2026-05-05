#ifndef DRIVER_H
#define DRIVER_H
#include "Provider.h"

class Service;
class Driver : public Provider
{
    string VehicleNumber;
    Service *rides[10];
    bool surge = 0;

public:
    Driver();
    Driver(string name, string id, string vc, double ratee);
    void assign_job(Service *ride);
    bool CheckAvailability(string datetime) override;
    void PrintDetails() override;
    void Display();
    string id_getter();
    string name_getter();
    void Show_Surge();
    void toggle_Surge();
    bool surge_getter();
    string vc_getter();
};
#endif