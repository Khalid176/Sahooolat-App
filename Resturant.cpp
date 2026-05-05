#include "Resturant.h"
#include <iostream>
using namespace std;

Restaurant::Restaurant()
{
}
string Restaurant::name_getter()
{
    return Name;
}
string Restaurant::id_getter()
{
    return RestaurantID;
}
int Restaurant::menu_count_getter()
{
    return menuCount;
}
Restaurant::Restaurant(string name, string id)
{
    Name = name;
    RestaurantID = id;
    menuCount = 0;
}
void Restaurant::Display()
{
    cout << "NAME : " << Name << "  |  " << " ID : " << RestaurantID << endl;
}

void Restaurant::AddMenuItem(MenuItem *m)
{
    if (menuCount >= 20)
    {
        cout << "Menu is full" << endl;
        return;
    }
    menu[menuCount] = m;
    menuCount++;
}
void Restaurant::RemoveMenuItem(int sr)
{
    if (sr < 0 || sr >= menuCount)
    {
        return;
    }
    delete menu[sr];
    for (int i = sr; i < menuCount - 1; i++)
    {
        menu[i] = menu[i + 1];
    }
    menuCount--;
}
void Restaurant::PrintMenu()
{
    cout << "Following are the items avaliable for you at " << Name << " Restaurant : " << endl;
    for (int i = 0; i < menuCount; i++)
    {
        cout << " ( " << i << " )";
        menu[i]->PrintDetails();
        cout << endl;
    }
}
MenuItem *Restaurant::thing_getter(int i)
{
    return menu[i];
}
