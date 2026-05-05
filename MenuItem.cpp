#include "MenuItem.h"
#include <iostream>
using namespace std;
MenuItem::MenuItem(string n, double p, string Restaurant_name)
{
    Name = n;
    Price = p;
    Restaurant_name_from_where_order_came = Restaurant_name;
}
void MenuItem::PrintDetails()
{
    cout << Name << "          " << Price << " Rs" << endl;
}
double MenuItem::price_getter()
{
    return Price;
}
string MenuItem::name_getter()
{
    return Name;
}
string MenuItem::Restaurant_name_from_where_order_came_getter()
{
    return Restaurant_name_from_where_order_came;
}