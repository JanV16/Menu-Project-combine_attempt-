// #ifndef BEVERAGE_H
// #define BEVERAGE_H
// #include <iostream>
// #include <string>
// #include <iomanip>
// #include "MenuClass.h"

// class Beverage: public Menu
// {
//     public: void Item()
//     {
//          std::cout << std::left << std::setw(15) << name << std::left << std::setw(5) << price << std::left << std::setw(5) << temp << std::left << std::setw(15) << option
//         << std::left << std::setw(5) << calorie << "\n";
//     }
// };

// #endif


#ifndef BEVERAGECLASS_H
#define BEVERAGECLASS_H
#include <iostream>
#include <string>
#include <iomanip>
#include "MenuClass.h"


class BeverageClass : public MenuClass {
    public:
    void Item()
    {

    }
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
        std::cout << "enter hot or cold: ";
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

};

#endif