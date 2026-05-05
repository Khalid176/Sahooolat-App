#include "FoodOrder.h"
#include <iostream>
#include "User.h"
using namespace std;
FoodOrder::FoodOrder(string id, string dt, User *u) : Service(id, dt, u) // NEEW THING TAJE A LOOK AGAIN ":" IS FORCING IT TO DO THIS FIRsT AND THEN RUN THE CODE
{
    restaurantCount = 0; // might cause an issue check later ::::::::::::::::::::::::::::::::
    Order_items_count = 0;
    toltal_Cost = 0;
}

void FoodOrder::AddRestaurant(Restaurant *r)
{
    restaurants[restaurantCount] = r;
    restaurantCount++;
}
double FoodOrder::CalculateCost()
{
    toltal_Cost = 0;
    for (int i = 0; i < Order_items_count; i++)
    {
        toltal_Cost = chooosenItems[i]->price_getter() + toltal_Cost;
    }
    return toltal_Cost;
}
void FoodOrder::AddItemToOrder(MenuItem *m)
{
    if (Order_items_count >= 30)
    {
        cout << "Order limit reached!" << endl;
        return;
    }
    chooosenItems[Order_items_count] = m;
    Order_items_count++;
}
void FoodOrder::PrintDetails()
{
    for (int i = 0; i < Order_items_count; i++)
    {
        cout << "( " << i + 1 << " ) " << chooosenItems[i]->name_getter() << " " << chooosenItems[i]->price_getter() << " Rs " << " from " << chooosenItems[i]->Restaurant_name_from_where_order_came_getter() << endl;
    }
    cout << "Total Bill : " << CalculateCost() << " Rs " << endl;
}
int FoodOrder::order_items_count_getter()
{
    return Order_items_count;
}
int FoodOrder::order_restaurant_count_getter()
{
    return restaurantCount;
}
int FoodOrder::order_total_cost_getter()
{
    return toltal_Cost;
}
void FoodOrder::order_total_count_setter(int c)
{
    Order_items_count = c;
}
void FoodOrder::order_restaurant_count_setter(int c)
{
    restaurantCount = c;
}
