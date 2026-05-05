#ifndef SERVICE_H
#define SERVICE_H
#include <string>
#include <iostream>
using namespace std;

class User;

class Service
{
protected:
    string ServiceID;
    string DateTime;
    User *user; // association
public:
    Service(string id, string dt, User *u);
    virtual double CalculateCost() = 0;
    virtual void PrintDetails() = 0;
    string datetime_getter();
    virtual ~Service() {} // inline
};
#endif