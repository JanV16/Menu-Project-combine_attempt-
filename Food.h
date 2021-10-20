#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include <string>
#include <iomanip>
#include "MenuItem.h"


class Food : public MenuItem {
    public:
    void Item()
    {

    }
    
    // Food(){
    //     max= 0;
    //     count= 0;
    //     contents = nullptr;
    // }
    
    // Food(int size){
    //     max = size;
    //     count = 0;
    //     contents= new MenuItem[size];
    // }
    
    
    
    std::string getNameFromUser()
    {
        std::cout << "enter name: ";
        std::string name{};
        std::cin >> name;
        return name;
    }
    int getPriceFromUser()
    {
        std::cout << "enter price: ";
        int price{};
        std::cin >> price;
        return price;
    }
    std::string getTempFromUser()
    {
        std::cout << "enter spicy or non: ";
        std::string temp{};
        std::cin >> temp;
        return temp;
    }
    std::string getOptionFromUser()
    {
        std::cout << "enter dietary specifications: ";
        std::string option{};
        std::cin >> option;
        return option;
    }
    int getCalorieFromUser()
    {
        std::cout << "enter calories: ";
        int calorie{};
        std::cin >> calorie;
        return calorie;
    }
    
    
    // bool add_item(MenuItem new_menuitem){
    //     if (count < max){
    //         contents[count]= new_menuitem;
    //         count++;
    //         return true;
    //     }
    //     return false;
        
    // }
    
    
    
    // int max;
    // int count;
    // MenuItem* contents;

};

#endif