#include "Service.h"
#include "User.h"

Service::Service(string id, string dt, User *u)
{
    ServiceID = id;
    DateTime = dt;
    user = u;
}
string Service::datetime_getter()
{
    return DateTime;
}
