#include <iostream>

int main(){
    int elephant_size; // Contains random garbage data
    int lion_count{}; //Initializes to 0
    int dog_count{10}; // Initializes to 10
    int cat_count{15}; // Initializesto 15

    //We can use expression as initializer

    int domesticated_animals{ dog_count + cat_count };

    // Won't allow to store undefined variables DUH.

    // Conversion of double type

    //int narrowing_conversion{2.9}; 
    //Won't let you compile
    std::cout << "---------- Braced Initialization ----------" << std::endl;
    std::cout << "elephant size: " << elephant_size << std::endl;
    std::cout << "lion count: " << lion_count << std::endl;
    std::cout << "dog count: " << dog_count << std::endl;
    std::cout << "cat count: " << cat_count << std::endl;
    std::cout << "domesticated animals: " << domesticated_animals << std::endl;

    //Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count( apple_count + orange_count );
    int narrowing_conversion_functional(2.9); //We will lose information of the double type info 2.9. Less safe
    // It will give you a warning tho.

    std::cout << "---------- Functional Initialization ----------" << std::endl;
    std::cout << "apple count: " << apple_count << std::endl;
    std::cout << "orange count: " << orange_count << std::endl;
    std::cout << "fruit count: " << fruit_count << std::endl;
    std::cout << "narrowing conversion: " << narrowing_conversion_functional << std::endl;

    //Assignment Initialization
    int bike_count = 2;
    int car_count = 7;
    int vehicule_count = bike_count + car_count;
    int narrowing_conversion_assignment = 2.9; // Will give warning tho.

    std::cout << "---------- Assignment Initialization ----------" << std::endl;
    std::cout << "bike_count: " << bike_count << std::endl;
    std::cout << "car_count: " << car_count << std::endl;
    std::cout << "vehicule_count: " << vehicule_count << std::endl;
    std::cout << "narrowing conversion: " << narrowing_conversion_assignment << std::endl;

    std::cout << "---------- Size of function ----------" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of bike_count: " << sizeof(bike_count) << std::endl;
    
    return 0;
}