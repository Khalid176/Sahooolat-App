#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>
#include <iostream>
using namespace std;

class MenuItem
{
    string Name;
    double Price;
    string Restaurant_name_from_where_order_came;

public:
    MenuItem(string n, double p, string Restaurant_name_from_where_order_came);
    double price_getter();
    string name_getter();
    string Restaurant_name_from_where_order_came_getter();
    void PrintDetails();
};
#endif