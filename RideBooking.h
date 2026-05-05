#ifndef RIDEBOOKING_H
#define RIDEBOOKING_H
#include "Service.h"
#include "Driver.h"
class RideBooking : public Service
{
    Driver *driver;
    double Distance;
    bool SurgePricing;

public:
    RideBooking(string id, string dt, User *u, Driver *d, double dist, bool surge);
    double CalculateCost() override;
    void PrintDetails() override;
};
#endif