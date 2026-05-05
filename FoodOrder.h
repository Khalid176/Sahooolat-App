#ifndef FOODORDER_H
#define FOODORDER_H
#include "Service.h"
#include "Resturant.h"
#include "MenuItem.h"


class FoodOrder : public Service
{
    Restaurant *restaurants[5]; // multiple restaurants per order
    int restaurantCount;
    // Composition: MenuItems inside order
    MenuItem *chooosenItems[30];
    int Order_items_count;
    double toltal_Cost;

public:
    FoodOrder(string id, string dt, User *u);
    void AddRestaurant(Restaurant *r);
    double CalculateCost() override;
    void PrintDetails() override;
    void AddItemToOrder(MenuItem *m);
    int order_items_count_getter();
    int order_restaurant_count_getter();
    int order_total_cost_getter();
    void order_total_count_setter(int);
    void order_restaurant_count_setter(int);
    
};
#endif