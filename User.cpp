#include "User.h"
#include "Service.h"
#include <iostream>
using namespace std;

class Service;


User::User()
{
}
User::User(string name, string id)
{
    Name = name;
    UserID = id;
    bookingCount = 0;
}
int User::booking_count_getter()
{
    return bookingCount;
}
string User::id_getter()
{
    return UserID;
}
void User::AddBooking(Service *s)
{
    if (bookingCount >= 50)
    {
        cout << "Booking limit reached!" << endl;
        return;
    }
    bookings[bookingCount] = s;
    bookingCount++;
}
void User::PrintBookings()
{
    cout << "Following are the booking/orders you have made : " << endl;
    for (int i = 0; i < bookingCount; i++)
    {
        cout << "( " << i << " )";
        bookings[i]->PrintDetails();
        cout << endl;
    }
}