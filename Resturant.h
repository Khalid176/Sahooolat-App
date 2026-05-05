#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
#include "MenuItem.h"

class Restaurant
{
    string Name;
    string RestaurantID;
    MenuItem *menu[20]; // Aggregation
    int menuCount;

public:
    Restaurant();
    Restaurant(string name, string id);
    void AddMenuItem(MenuItem *m);
    void RemoveMenuItem(int Sr_no);
    void PrintMenu();
    void Display();
    string id_getter();
    string name_getter();
    int menu_count_getter();
    MenuItem *thing_getter(int);
};
#endif