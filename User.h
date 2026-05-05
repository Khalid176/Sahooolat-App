#define USER_H
#define USER_H
#include <string>
using namespace std;
class Service;
class User
{

    string Name;
    string UserID;
    Service *bookings[50]; // Can include rides, food orders, and home services
    int bookingCount;

public:
    User();
    User(string name, string id);
    void AddBooking(Service *s);
    void PrintBookings();
    string id_getter();
    int booking_count_getter();
};
