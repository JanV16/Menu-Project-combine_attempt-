// #ifndef MENU_H
// #define MENU_H
// #include <iostream>
// #include <string>

// class Menu
// {
//     public: virtual void Item() = 0;
//             void set_name(std::string n) { name = n;}
//             void set_price(int p) { price = p;}
//             void set_temp(std::string t) { temp = t;}
//             void set_option(std::string o) { option = o;}
//             void set_calorie(int c) { calorie = c;}
//             std:: string name;
//             float price;
//             std:: string temp;
//             std:: string option;
//             int calorie;
// };
// #endif


#ifndef MENUCLASS_H
#define MENUCLASS_H
#include <iostream>
#include <string>

class MenuClass
{
    
    public: virtual void Item() = 0;
            std::string getNameFromUser();
            int getPriceFromUser();
            std::string getTempFromUser();
            std::string getOptionFromUser();
            int getCalorieFromUser();

            std::string name;
            int price;
            std::string temp;
            std::string option;
            int calorie;
            
            // MenuItem();
            // MenuItem(std::string name, int price);
            // void display();
            // std::string getName(); 
            // int getPrice();
            // std::string itemName;
            // int itemPrice;

};
#endif