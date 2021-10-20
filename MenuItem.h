#ifndef MENUITEM_H
#define MENUITEM_H
#include <iostream>
#include <string>

class MenuItem
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