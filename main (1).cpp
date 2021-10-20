// #include "food1.cpp"
// #include "menuitem1.cpp"

// int main()
// {
//    //Declare Menu Item Object
//    menuitem1 i1("chicken", 4);
//    menuitem1 i2("tart", 4);

//    //Declare Food Object
//    food1 f1("steak", 4, 101, "vegan" );
//    food1 f2("soup", 4, 102, " - ");
//    food1 f3("salmon", 4, 103, "vegan");

//    //Display Menuitem Details
//    cout<<"Menu Item Data:\n";
//    i1.display();
//    cout<< "------------------------------------\n" ;
//    i2.display();

//    // Display Food Data
//    cout<<"\n Food data: \n";
//    f1.display();
//    cout<<"------------------------------------\n";
//    f2.display();
//    cout<<"------------------------------------\n";
//    f3.display();

//    return 0;
// }


#include "MenuItem.h"
#include "Food.h"
//#include "Beverage.h"
#include <string>

int main()
{
    //std co


    //int x,y;
    std::string answer;
    int number;



    //table


    std::cout<< "see menu?:";

    std::cin >>answer;


    if (answer != "yes"){


        return 0;
    }

        else{



    std::cout<< "food name?:";

    std::cin >> number ;
    
    
    switch (number){
      case 1:
        cout<<"\n Food data: \n";
        f1.display();
        cout<<"------------\n";
        break;

        case 2:
        cout<<"\n Food data: \n";
        f2.display();
        cout<<"------------\n";
        break;
    }
    
    
    
    
    

    //---------------------------------------------------------------------
    MenuItem i1("spicy chicken wins", 4);
    MenuItem i2("chicken wings", 4);

    //Declare Food Object
    Food f1("chips", 4, 101, "vegan" );
    Food f2("cheese sandwich", 4, 102, " - ");
    Food f3("salad", 4, 103, "vegan");
    //Display Menuitem Details
    cout<<"Menu Item Data:\n";
    i1.display();
    cout<< "--------------------------\n" ;
    i2.display();
    // Display Food Data
    cout<<"\n Food data: \n";
    f1.display();
    cout<<"------------\n";
    f2.display();
    cout<<"------------------------------------\n";
    f3.display();
    cout<<"------------------------------------\n";



    // std::cout<< "food name?:";

    // std::cin >> name;








    // std::cout<< "choose a number:";

    // std::cin >>number;

    




    return 0;

    //-----------------------------------------------------------

    // z = x + y;

    // std::cout<< "x= " << x <<", "<< "y= " << y <<", ";
    // std::cout<< "x + y ="<< z << std::endl;

    // return 0;

    // Food Chicken{5.05, 1};
    // Chicken.f_name = "Chicken Wings"; // f_name is public

    // Chicken.printNameAndPrice();

   // return 0;
}
}