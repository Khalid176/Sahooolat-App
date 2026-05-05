
// g++ main.cpp User.cpp Service.cpp MenuItem.cpp Resturant.cpp FoodOrder.cpp Provider.cpp ServiceProvider.cpp HomeServices.cpp Driver.cpp RideBooking.cpp -o saholat_app

#include <iostream>
#include <iomanip>
#include "User.h"
#include "Service.h"
#include "MenuItem.h"
#include "Resturant.h"
#include "FoodOrder.h"
#include "Provider.h"
#include "ServiceProvider.h"
#include "HomeServices.h"
#include "Driver.h"
#include "RideBooking.h"

using namespace std;

int main()
{
    Restaurant *Restaurant_DATA[50];
    Driver *driver_DATA[50];
    ServiceProvider *worker_DATA[50];
    User *user_DATA[50];

    int total_user_count = 0;
    int total_Resturant_count = 0;
    int service_provider_count = 0;
    int total_rider_count = 0;

    int choice_1 = 0;

    cout << "WELCOME TO THE SAHOOOLAT APP : 10 MASLOOOOOON KA AIK HAL   " << endl;

back1: // Adding input validdation 1;
    cout << "Please Select You Type from the following : \n(1) MANAGEMENT \n(2) BUINESS OWNER \n(3) USER\n";
    cin >> choice_1;
    if (choice_1 != 1 && choice_1 != 2 && choice_1 != 3)
    {
        cout << "INVALID CHOICE \n";
        goto back1;
    }

    if (choice_1 == 1)
    {
        cout << setfill('=') << setw(75) << " Weclome to Managment interface of Sahooolat App " << setfill('=') << setw(25) << " " << endl;
        int choice_2 = 0;
    back2:
        cout << "Can you Please Select the function You want to perform : \n(1) Add A business \n(2) Remove a business \n(3) Take a Look at the businesses\n";
        cin >> choice_2;
        if (choice_2 != 1 && choice_2 != 2 && choice_2 != 3)
        {
            cout << "INVALID CHOICE \n";
            goto back2;
        }
        if (choice_2 == 1)
        {
            int choice_3 = 0;
        back3:
            cout << "Please Choose one of the 3 catagories avaliable : " << endl;
            cout << "(1) Resturant " << endl;
            cout << "(2) Driver " << endl;
            cout << "(3) Home Service Provider" << endl;
            cin >> choice_3;
            if (choice_3 != 1 && choice_3 != 2 && choice_3 != 3)
            {
                cout << "INVALID CHOICE \n";
                goto back3;
            }
            if (choice_3 == 1)
            {
                string temp_name;
                string temp_id;
                char small_man_big_dreams_1 = 0;
            back4:
                cout << "Please Enter the name of the resturant : ";
                cin >> temp_name;
                cout << "Please Enter the ID of the returant : ";
                cin >> temp_id;
                Restaurant_DATA[total_Resturant_count] = new Restaurant(temp_name, temp_id);
                total_Resturant_count++;
                cout << "DO YOU WISH TO ASSIGN A NEW RESTURANT (Y/N): ";
                cin >> small_man_big_dreams_1;
                if (small_man_big_dreams_1 == 'y' || small_man_big_dreams_1 == 'Y')
                {
                    goto back4;
                }
            }
            if (choice_3 == 2)
            {
                string temp_name;
                string temp_id;
                string temp_VehicleNumber;
                double temp_rate = 0;
                int booking_number = 0;
                char small_man_big_dreams_2 = '\0';
            back5:
                cout << "Please Enter the name of the Driver : ";
                cin >> temp_name;
                cout << "Please Enter the ID of the Driver :";
                cin >> temp_id;
                cout << "Please Enter the vehcleNumber : ";
                cin >> temp_VehicleNumber;
                cout << "Please Enter the rate : ";
                cin >> temp_rate;
                driver_DATA[total_rider_count] = new Driver(temp_name, temp_id, temp_VehicleNumber, temp_rate);
                total_rider_count++;
                cout << "DO YOU WISH TO ASSIGN A NEW DRIVER (Y/N) : ";
                cin >> small_man_big_dreams_2;
                if (small_man_big_dreams_2 == 'y' || small_man_big_dreams_2 == 'Y')
                {
                    goto back5;
                }
            }

            if (choice_3 == 3)
            {
                string temp_name;
                string temp_id;
                string temp_ServiceType;
                double temp_rate = 0;
                int booking_number = 0;
                char Small_man_big_dreams_3 = '\0';
            back6:
                cout << "Please Enter the name of the Worker : ";
                cin >> temp_name;
                cout << "Please Enter the ID of the Worker : ";
                cin >> temp_id;
                cout << "Please Enter the Service type : ";
                cin >> temp_ServiceType;
                cout << "Please Enter the rate : ";
                cin >> temp_rate;
                worker_DATA[service_provider_count] = new ServiceProvider(temp_name, temp_id, temp_ServiceType, temp_rate);
                service_provider_count++;
                cout << "DO YOU WISH TO ASSIGN A NEW WORKER (Y/N):  ";
                cin >> Small_man_big_dreams_3;
                if (Small_man_big_dreams_3 == 'y' || Small_man_big_dreams_3 == 'Y')
                {
                    goto back6;
                }
            }
        }
        if (choice_2 == 3)
        {
            int choice_7 = 0;
        back7:
            cout << "Please Choose one of the 3 catagories avaliable : " << endl;
            cout << "(1) Resturant " << endl;
            cout << "(2) Driver " << endl;
            cout << "(3) Home Service Provider" << endl;
            cin >> choice_7;
            if (choice_7 != 1 && choice_7 != 2 && choice_7 != 3)
            {
                cout << "INVALID CHOICE \n";
                goto back7;
            }
            if (choice_7 == 1)
            {
                if (total_Resturant_count > 0)
                {
                    cout << "Following is the data : \n";

                    for (int i = 0; i < total_Resturant_count; i++)
                    {
                        Restaurant_DATA[i]->Display();
                    }
                }
                else
                {
                    cout << "No Resturants to show\n";
                }
            }
            if (choice_7 == 2)
            {

                if (total_rider_count > 0)
                {
                    cout << "Following is the data : \n";
                    for (int i = 0; i < total_rider_count; i++)

                    {
                        driver_DATA[i]->Display();
                    }
                }
                else
                {
                    cout << "No Drivers to show\n";
                }
            }
            if (choice_7 == 3)
            {

                if (service_provider_count > 0)
                {
                    cout << "Following is the data : \n";
                    for (int i = 0; i < service_provider_count; i++)
                    {
                        worker_DATA[i]->Display();
                    }
                }
                else
                {
                    cout << "No Service Providers to show\n";
                }
            }
            char small_man_big_dreams_4 = '\0';
            cout << "DO YOU WISH TO LOOK AT DATA OF ANY OTHER CATAGORY (Y/N) : ";
            cin >> small_man_big_dreams_4;
            if (small_man_big_dreams_4 == 'Y' || small_man_big_dreams_4 == 'y')
            {
                goto back7;
            }
        }
        if (choice_2 == 2)
        {
            char small_man_big_dreams_5 = '\0';
            int choice_8 = 0;
        back8:
            cout << "Please Choose one of the 3 catagories avaliable : " << endl;
            cout << "(1) Resturant " << endl;
            cout << "(2) Driver " << endl;
            cout << "(3) Home Service Provider" << endl;
            cin >> choice_8;
            if (choice_8 != 1 && choice_8 != 2 && choice_8 != 3)
            {
                cout << "INVALID CHOICE \n";
                goto back8;
            }
            if (choice_8 == 1)
            {
            back9:
                char small_man_big_dreams_6 = '\0';
                int removal_choice = 0;
                if (total_Resturant_count > 0)
                {
                    cout << "Following are the rsturants : \n";
                    for (int i = 0; i < total_Resturant_count; i++)
                    {
                        cout << "( " << i << " )";
                        Restaurant_DATA[i]->Display();
                    }
                    cout << "please enter the Sr. no of the resturant you wanna remove :";
                    cin >> removal_choice;
                    if (removal_choice < 0 || removal_choice >= total_Resturant_count)
                    {
                        cout << "Invalid Entry\n";
                        goto back9;
                    }
                    delete Restaurant_DATA[removal_choice];

                    for (int i = removal_choice; i <= total_Resturant_count; i++)
                    {
                        Restaurant_DATA[i] = Restaurant_DATA[i + 1];
                    }
                    total_Resturant_count--;
                    cout << "Do You Wish to remove an other Resturant (Y/N) : ";
                    cin >> small_man_big_dreams_6;
                    if (small_man_big_dreams_6 == 'y' || small_man_big_dreams_6 == 'Y')
                    {
                        goto back9;
                    }
                }
                else
                {
                    cout << "No Resturants to show\n";
                }
            }
            if (choice_8 == 2)
            {
                char small_man_big_dreams_7 = '\0';
                int removal_choice = 0;
            back10:

                cout << "Following are the Drivers : \n";
                for (int i = 0; i < total_rider_count; i++)
                {
                    if (total_rider_count > 0)
                    {
                        cout << "(" << i << ")";
                        driver_DATA[i]->Display();
                    }
                    else
                    {
                        cout << "No Drivers to show\n";
                        break;
                    }
                }
                if (total_rider_count > 0)
                {
                    cout << "please enter the Sr. no of the Driver you wanna remove :";
                    cin >> removal_choice;
                    if (removal_choice < 0 || removal_choice >= total_rider_count)
                    {
                        cout << "Invalid Entry\n";
                        goto back10;
                    }
                    delete driver_DATA[removal_choice];
                    for (int i = removal_choice; i <= total_rider_count; i++)
                    {
                        driver_DATA[i] = driver_DATA[i + 1];
                    }
                    total_rider_count--;
                    cout << "Do You Wish to remove an other Rider (Y/N) : ";
                    cin >> small_man_big_dreams_7;
                    if (small_man_big_dreams_7 == 'y' || small_man_big_dreams_7 == 'Y')
                    {
                        goto back10;
                    }
                }
            }
            if (choice_8 == 3)
            {
                char small_man_big_dreams_8 = '\0';
                int removal_choice = 0;
            back11:
                if (service_provider_count > 0)
                {
                    cout << "Following are the Service Provider : \n";
                    for (int i = 0; i < service_provider_count; i++)
                    {
                        cout << "( " << i << " )";
                        worker_DATA[i]->Display();
                    }
                    cout << "please enter the Sr. no of the resturant you wanna remove :";
                    cin >> removal_choice;
                    if (removal_choice < 0 || removal_choice >= service_provider_count)
                    {
                        cout << "Invalid Entry\n";
                        goto back11;
                    }
                    delete worker_DATA[removal_choice];
                    for (int i = removal_choice; i <= service_provider_count; i++)
                    {
                        worker_DATA[i] = worker_DATA[i + 1];
                    }
                    service_provider_count--;
                    cout << "Do You Wish to remove an other Worker (Y/N) : ";
                    cin >> small_man_big_dreams_8;
                    if (small_man_big_dreams_8 == 'y' || small_man_big_dreams_8 == 'Y')
                    {
                        goto back11;
                    }
                }
                else
                {
                    cout << "No Service Providers to show\n";
                }
                cout << "DO You wish to remove someone from another catagory (Y/N): ";
                cin >> small_man_big_dreams_5;
                if (small_man_big_dreams_5 == 'y' || small_man_big_dreams_5 == 'Y')
                {
                    goto back8;
                }
            }
            char small_man_big_dreams_6 = '\0';
            cout << "DO You wish to go to some another catagory (Y/N): ";
            cin >> small_man_big_dreams_6;
            if (small_man_big_dreams_6 == 'y' || small_man_big_dreams_6 == 'Y')
            {
                goto back2;
            }
           
        }
    }
    if (choice_1 == 2)
    {
        int choice_9;
        cout << setfill('=') << setw(75) << " Weclome to Business interface of Sahooolat App " << setfill('=') << setw(25) << " " << endl;
    back21:
        cout << "Please Choose one of the 3 catagories avaliable : " << endl;
        cout << "(1) Resturant " << endl;
        cout << "(2) Driver " << endl;
        cout << "(3) Home Service Provider" << endl;
        cin >> choice_9;
        if (choice_9 != 1 && choice_9 != 2 && choice_9 != 3)
        {
            cout << "INVALID CHOICE \n";
            goto back21;
        }
        if (choice_9 == 1)
        {
            string temp_id;
            int choice_10 = 51;
        back12:
            cout << "Please Enter you resturant id : ";
            cin >> temp_id;
            choice_10 = 51;

            for (int i = 0; i < total_Resturant_count; i++)
            {

                if (Restaurant_DATA[i]->id_getter() == temp_id)
                {
                    choice_10 = i;
                    break;
                }
            }
            if (choice_10 == 51)
            {
                cout << "Invalid ID" << endl;
                goto back12;
            }
        back15:
            int chocie_11 = 0;
            cout << "Which function you want to perform : " << endl;
            cout << "(1) Add Menu item " << endl;
            cout << "(2) Remove Menu item " << endl;
            cout << "(3) Show Menu \n";
            cin >> chocie_11;
            if (chocie_11 == 1)
            {
            back13:
                char choice_12 = 0;

                string temp_name;
                double temp_price = 0;
                cout << "Please Enter the name of the item you want to add : ";
                cin >> temp_name;
                cout << "Please enter the price of " << temp_name << " : ";
                cin >> temp_price;
                MenuItem *MI = new MenuItem(temp_name, temp_price, Restaurant_DATA[choice_10]->name_getter());
                Restaurant_DATA[choice_10]->AddMenuItem(MI);

                cout << "Do you wish to add another item (Y/N) : ";
                cin >> choice_12;
                if (choice_12 == 'y' || choice_12 == 'Y')
                {
                    goto back13;
                }
            }
            else if (chocie_11 == 3)
            {
                cout << "This is Your Current Menu : \n";
                if (Restaurant_DATA[choice_10]->menu_count_getter() > 0)
                {
                    Restaurant_DATA[choice_10]->PrintMenu();
                }
                else
                {
                    cout << "Menu is currently empty\n";
                }
            }
            else if (chocie_11 == 2)
            {
            back14:
                int choice_13 = 51;
                char choice_14 = '\0';
                if (Restaurant_DATA[choice_10]->menu_count_getter() > 0)
                {
                    cout << "This is Your Current Menu : \n";
                    Restaurant_DATA[choice_10]->PrintMenu();

                    cout << "Please enter your Sr. No for the item you wanna remove : ";
                    cin >> choice_13;
                    Restaurant_DATA[choice_10]->RemoveMenuItem(choice_13);
                    cout << "Do you wish to add another item (Y/N) : ";
                    cin >> choice_14;

                    if (choice_14 == 'y' || choice_14 == 'Y')
                    {
                        goto back14;
                    }
                }
                else
                {
                    cout << "Invalid Choice\n";
                    goto back15;
                }
            }
            char choice_15 = '\0';
            cout << "Do you wish to perform another function on this same resturant (Y/N) : ";
            cin >> choice_15;

            if (choice_15 == 'y' || choice_15 == 'Y')
            {
                goto back15;
            }
            char choice_16 = '\0';
            cout << "Do you wish to change the resturant (Y/N) : ";
            cin >> choice_16;
            if (choice_16 == 'y' || choice_16 == 'Y')
            {
                goto back12;
            }
            char choice_25 = '\0';
            cout << "Do you wish to access another business category (Y/N): ";
            cin >> choice_25;
            if (choice_25 == 'y' || choice_25 == 'Y')
            {
                goto back21;
            }
        }
        if (choice_9 == 2)
        {
        back16:
            string temp_id;
            int choice_17;
            cout << "Please enter your ID : ";
            cin >> temp_id;
            choice_17 = 51;

            for (int i = 0; i < total_rider_count; i++)
            {

                if (driver_DATA[i]->id_getter() == temp_id)
                {
                    choice_17 = i;
                    break;
                }
            }
            if (choice_17 == 51)
            {
                cout << "Invalid ID" << endl;
                goto back16;
            }
        back18:
            int choice_18 = 0;
            cout << "Which function You want to perform : \n"
                 << "(1) Change Your rate per kilometer \n"
                 << "(2) Toggle Surcharge Conditions\n"
                 << "(3) Check Status of the Surcharge\n"
                 << "(4) Display Rides \n";
            cin >> choice_18;
            if (choice_18 < 1 || choice_18 > 4)
            {
                cout << "Invalid Choice\n";
                goto back18;
            }
            if (choice_18 == 1)
            {
                double temp_rate;
                cout << "Please enter your new rate per kilometer : ";
                cin >> temp_rate;
                driver_DATA[choice_17]->rate_setter(temp_rate);
            }
            if (choice_18 == 2)
            {
                driver_DATA[choice_17]->toggle_Surge();
            }
            if (choice_18 == 3)
            {
                driver_DATA[choice_17]->Show_Surge();
            }
            if (choice_18 == 4)
            {
                driver_DATA[choice_17]->PrintDetails();
            }
            char choice_19 = '\0';
            cout << "Do you wish to perform another function on this same driver (Y/N) : ";
            cin >> choice_19;
            if (choice_19 == 'y' || choice_19 == 'Y')
            {
                goto back18;
            }
            char choice_20 = '\0';
            cout << "Do you wish to change the driver (Y/N) : ";
            cin >> choice_20;
            if (choice_20 == 'y' || choice_20 == 'Y')
            {
                goto back16;
            }
            char choice_26 = '\0';
            cout << "Do you wish to access another business category (Y/N): ";
            cin >> choice_26;
            if (choice_26 == 'y' || choice_26 == 'Y')
            {
                goto back21;
            }
        }
        if (choice_9 == 3)
        {
        back20:
            string temp_id;
            int choice_21;
            cout << "Please enter your ID : ";
            cin >> temp_id;
            choice_21 = 51;

            for (int i = 0; i < service_provider_count; i++)
            {

                if (worker_DATA[i]->id_getter() == temp_id)
                {
                    choice_21 = i;
                    break;
                }
            }
            if (choice_21 == 51)
            {
                cout << "Invalid ID" << endl;
                goto back20;
            }
            int choice_22 = 0;
        back19:
            cout << "Which function You want to perform : \n"
                 << "(1) Change Your rate \n"
                 << "(2) Display Appointments\n";
            cin >> choice_22;
            if (choice_22 < 1 || choice_22 > 2)
            {
                cout << "Invalid Choice\n";
                goto back19;
            }
            if (choice_22 == 1)
            {
                double temp_rate;
                cout << "Please enter your new rate : ";
                cin >> temp_rate;
                worker_DATA[choice_21]->rate_setter(temp_rate);
            }
            if (choice_22 == 2)
            {
                worker_DATA[choice_21]->PrintDetails();
            }
            char choice_23 = '\0';
            cout << "Do you wish to perform another function on this same worker (Y/N) : ";
            cin >> choice_23;
            if (choice_23 == 'y' || choice_23 == 'Y')
            {
                goto back19;
            }
            char choice_24 = '\0';
            cout << "Do you wish to change the worker (Y/N) : ";
            cin >> choice_24;
            if (choice_24 == 'y' || choice_24 == 'Y')
            {
                goto back20;
            }
            char choice_27 = '\0';
            cout << "Do you wish to access another business category (Y/N): ";
            cin >> choice_27;
            if (choice_27 == 'y' || choice_27 == 'Y')
            {
                goto back21;
            }
        }
        
    }
    if (choice_1 == 3)
    {
        cout << setfill('=') << setw(75) << " Weclome to User interface of Sahooolat App " << setfill('=') << setw(25) << " " << endl;

        string temp_name;
        string temp_id;
        cout << "Please Enter Your Name : ";
        cin >> temp_name;
        cout << "Please Enter Your ID : ";
        cin >> temp_id;

        int choice_31 = 51;

        for (int i = 0; i < total_user_count; i++)
        {

            if (user_DATA[i]->id_getter() == temp_id)
            {
                choice_31 = i;
                cout << " EXISTING DATA FOUND LOGGING YOU INTO YOUR ACCOUNT ";
                break;
            }
        }
        if (choice_31 == 51)
        {
            cout << " NO EXISTING DATA FOUND SIGNING YOU UP " << endl;
            User *u = new User(temp_name, temp_id);
            user_DATA[total_user_count] = u;
            total_user_count++;
            choice_31 = total_user_count - 1;
        }

        int choice_29 = 0;
    back30:
        cout << "Which service you want to use : \n(1) Food Delivery \n(2) Ride Booking \n(3) Home Service \n(4) Check My Bookings \n";
        cin >> choice_29;
        if (choice_29 != 1 && choice_29 != 2 && choice_29 != 3 && choice_29 != 4)
        {
            cout << "Invalid Choice \n";
            goto back30;
        }
        if (choice_29 == 1)
        {
        back31:
            string temp_date_time;
            cout << "For When you want to place this order : ";
            cin >> temp_date_time;
            FoodOrder *fD = new FoodOrder(user_DATA[choice_31]->id_getter(), temp_date_time, user_DATA[choice_31]);
            int choice_30 = 0;
            int last_restaurant = -1;
        backBUG1:

            cout << "Chooose one of the Following Resturants : " << endl;
            for (int i = 0; i < total_Resturant_count; i++)
            {
                cout << "(" << i << ")";
                Restaurant_DATA[i]->Display();
            }
            cin >> choice_30;
            if (choice_30 >= total_Resturant_count || choice_30 < 0)
            {
                cout << "Invalid Entery\n";
                goto backBUG1;
            }
            cout << "YOU HAVE SELECTED : " << Restaurant_DATA[choice_30]->name_getter() << endl;
        back32:

            int choice_33 = 0;
            cout << "This is the Menu of the Selected Resturant please select what you want to order : " << endl;
            Restaurant_DATA[choice_30]->PrintMenu();
            cin >> choice_33;
            if (Restaurant_DATA[choice_30]->menu_count_getter() <= choice_33 || choice_33 < 0)
            {
                cout << "Invalid Entery\n";
                goto back32;
            }
            MenuItem *MI = new MenuItem(Restaurant_DATA[choice_30]->thing_getter(choice_33)->name_getter(), Restaurant_DATA[choice_30]->thing_getter(choice_33)->price_getter(), Restaurant_DATA[choice_30]->thing_getter(choice_33)->Restaurant_name_from_where_order_came_getter());
            if (choice_30 != last_restaurant)
            {
                fD->AddRestaurant(Restaurant_DATA[choice_30]);
                last_restaurant = choice_30;
            }
            fD->AddItemToOrder(MI);
            char choice_bug_fix_1 = '\0';
            cout << "Do you wish to continue this order : ";
            cin >> choice_bug_fix_1;
            if (choice_bug_fix_1 == 'y' || choice_bug_fix_1 == 'Y')
            {
                goto backBUG1;
            }
            user_DATA[choice_31]->AddBooking(fD);
            cout << "Your order has been placed successfully ! " << endl;

            char choice_34 = '\0';
            cout << "Do you wish to place another order (Y/N) : ";
            cin >> choice_34;
            if (choice_34 == 'y' || choice_34 == 'Y')
            {
                goto back31;
            }
            char choice_35 = '\0';
            cout << "Do you wish to perform another booking (Y/N) : ";
            cin >> choice_35;
            if (choice_35 == 'y' || choice_35 == 'Y')
            {
                goto back30;
            }
            
        }
        if (choice_29 == 4)
        {
            if (user_DATA[choice_31]->booking_count_getter() > 0)
            {
                cout << "Following are your bookings : " << endl;
            }
            else
            {
                cout << "You have no bookings to show\n";
                goto back30;
            }
            user_DATA[choice_31]->PrintBookings();
            char choice_37 = '\0';
            cout << "Do you wish to perform another booking (Y/N) : ";
            cin >> choice_37;
            if (choice_37 == 'y' || choice_37 == 'Y')
            {
                goto back30;
            }
            
        }
        if (choice_29 == 3)
        {
            int choice_38 = 51;
            string temp_date_time;
        back33:
            cout << "Following are the service providers available in your area : " << endl;
            for (int i = 0; i < service_provider_count; i++)
            {
                worker_DATA[i]->Display();
            }
            cout << "WHICH ONE YOU WANT TO HIRE : ";
            cin >> choice_38;
            if (choice_38 < 0 || choice_38 >= service_provider_count)
            {
                cout << "Invalid Entry\n";
                goto back33;
            }
            cout << "For When you want to book this service : ";
            cin >> temp_date_time;
            if (worker_DATA[choice_38]->CheckAvailability(temp_date_time))
            {
                char choice_39 = 0;
                cout << " :( WORKER IS AVALIABLE :( ";
                cout << "DO YOU WISH TO CONFIRM THIS BOOKS FOR REFRENCE HERE ARE HIS DETAILS (Y/N) : ";
                cin >> choice_39;
                if (choice_39 == 'y' || choice_39 == 'Y')
                {
                    HomeService *Worker = new HomeService(user_DATA[choice_31]->id_getter(), temp_date_time, user_DATA[choice_31], worker_DATA[choice_38], worker_DATA[choice_38]->type_getter());
                    user_DATA[choice_31]->AddBooking(Worker);
                    worker_DATA[choice_38]->assign_appointment(Worker);
                    cout << "Your booking has been confirmed :) " << endl;
                }
                char choice_40 = '\0';
                cout << "Do you wish to book another service (Y/N) : ";
                cin >> choice_40;
                if (choice_40 == 'y' || choice_40 == 'Y')
                {
                    goto back33;
                }
                char choice_41 = '\0';
                cout << "Do you wish to perform another booking from an other catagory (Y/N) : ";
                cin >> choice_41;
                if (choice_41 == 'y' || choice_41 == 'Y')
                {
                    goto back30;
                }
                
            }
            else
            {
                cout << " :( WORKER IS NOT AVALIABLE IN THIS TIME SLOT :( " << endl;
                char choice_43 = '\0';
                cout << "Do you wish to try booking another service (Y/N) : ";
                cin >> choice_43;
                if (choice_43 == 'y' || choice_43 == 'Y')
                {
                    goto back33;
                }
                char choice_44 = '\0';
                cout << "Do you wish to perform another booking from an other catagory (Y/N) : ";
                cin >> choice_44;
                if (choice_44 == 'y' || choice_44 == 'Y')
                {
                    goto back30;
                }
                
            }
        }
        if (choice_29 == 2)
        {
            int choice_38 = 51;
            string temp_date_time;
        back34:
            cout << "Following are the Drivers available in your area : " << endl;
            for (int i = 0; i < total_rider_count; i++)
            {
                driver_DATA[i]->Display();
            }
            double choice_40 = 0;
            cout << "WHICH ONE YOU WANT TO HIRE : ";
            cin >> choice_38;
            if (choice_38 < 0 || choice_38 >= total_rider_count)
            {
                cout << "Invalid Entry\n";
                goto back34;
            }
            cout << "For When you want to book this ride : ";
            cin >> temp_date_time;
            cout << "Please Enter the distance You wanna travel in KMS : ";
            cin >> choice_40;
            if (driver_DATA[choice_38]->CheckAvailability(temp_date_time))
            {
                char choice_39 = 0;
                cout << " :( DRIVER IS AVALIABLE :( " << endl;
                cout << "DO YOU WISH TO CONFIRM THIS BOOKS (Y/N) : ";
                cin >> choice_39;
                if (choice_39 == 'y' || choice_39 == 'Y')
                {
                    RideBooking *rider = new RideBooking(user_DATA[choice_31]->id_getter(), temp_date_time, user_DATA[choice_31], driver_DATA[choice_38], choice_40, driver_DATA[choice_38]->surge_getter());
                    user_DATA[choice_31]->AddBooking(rider);
                    driver_DATA[choice_38]->assign_job(rider);
                    cout << "Your booking has been confirmed :) \n";
                }
                char choice_42 = '\0';
                cout << "Do you wish to book another driver (Y/N) : ";
                cin >> choice_42;
                if (choice_42 == 'y' || choice_42 == 'Y')
                {
                    goto back34;
                }
                char choice_43 = '\0';
                cout << "Do you wish to perform another booking from an other catagory (Y/N) : ";
                cin >> choice_43;
                if (choice_43 == 'y' || choice_43 == 'Y')
                {
                    goto back30;
                }
                
            }
            else
            {
                cout << " :( DRIVER IS NOT AVALIABLE IN THIS TIME SLOT :( \n";
                char choice_45 = '\0';
                cout << "Do you wish to book another driver (Y/N) : ";
                cin >> choice_45;
                if (choice_45 == 'y' || choice_45 == 'Y')
                {
                    goto back34;
                }
                char choice_46 = '\0';
                cout << "Do you wish to perform another booking from an other catagory (Y/N) : ";
                cin >> choice_46;
                if (choice_46 == 'y' || choice_46 == 'Y')
                {
                    goto back30;
                }
                
            }
        }
    }
    char choice_49 = '\0';
    cout << "Do you wish to go back to main menu (Y/N): ";
    cin >> choice_49;
    if (choice_49 == 'y' || choice_49 == 'Y')
    {
        goto back1;
    }
    char choice_48 = '\0';
    cout << "Do you wish to exit the app (Y/N) : ";
    cin >> choice_48;
    if (choice_48 == 'n' || choice_48 == 'N')
    {
        goto back1;
    }
}
