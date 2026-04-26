#include <iostream>

int main(){

    bool red_light{true};
    bool green_light{false};

    // Size in memory

    std::cout << "------------- Memory Usage -------------" << std::endl;
    std::cout << "size of Bool: " << sizeof(bool)<< " bytes" << std::endl;

    // First if else statement

    std::cout << "------------- Some Examples -------------" << std::endl;
    if (red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    // Podemos usar la misma variable como statement

    if (green_light){
        std::cout << "Green Light!" << std::endl;
    }else{
        std::cout << "Not green!" << std::endl;
    }

    //Printing out a bool

    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    // It will print only numbers
    // 1 -> true
    // 0 -> false
    
    std::cout << std::boolalpha;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;
    return 0;
}