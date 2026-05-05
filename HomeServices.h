#ifndef HOMESERVICE_H
#define HOMESERVICE_H
#include "Service.h"
#include "ServiceProvider.h"

class User; // forward declaration


class HomeService : public Service
{
    ServiceProvider *provider;
    string ServiceType;

public:
    HomeService(string id, string dt, User *u, ServiceProvider *sp, string type);
    double CalculateCost() override;
    void PrintDetails() override;
};
#endif