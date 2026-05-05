#include "Provider.h"

Provider::Provider(string name, string id, double ratee)
{
    Name = name;
    ProviderID = id;
    rate = ratee;
}
Provider::Provider()
{
}
double Provider::rate_getter()
{
    return rate;
}
string Provider::getter_provider_name()
{
    return Name;
}

string Provider::id_getter()
{
    return ProviderID;
}
void Provider::rate_setter(double r)
{
    rate = r;
}