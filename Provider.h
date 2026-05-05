#ifndef PROVIDER_H
#define PROVIDER_H
#include <string>
using namespace std;
class Provider
{
protected:
    string Name;
    string ProviderID;
    double rate;
    int booking_counter;

public:
    Provider();
    Provider(string name, string id, double ratee);
    virtual bool CheckAvailability(string datetime) = 0;
    virtual void PrintDetails() = 0;
    string getter_provider_name();
    double rate_getter();
    virtual ~Provider() {}
    void rate_setter(double);
    string id_getter();
};
#endif