#include <iostream>

/*
El objetivo de este modulo es simplemente aprender a ocupar 
programación condicional, es decir, if, else if y else.
*/

int main(){

    int number1{55};
    int number2{60};

    bool result = (number1 > number2);
    std::cout << std::boolalpha << "result: " << result << std::endl;

    if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }


    // else if.
    int Pen {10};
    int Pencil {20};
    int Eraser {30};
    int Circle {40};
    int Square {50};

    int tool {Pencil};

    if (tool == Pen){
        std::cout << "The active tool is a Pen" << std::endl;
    }
    else if (tool == Pencil){
        std::cout << "The active tool is a Pencil" << std::endl;
    }
    else if (tool == Eraser){
        std::cout << "The active tool is a Eraser" << std::endl;
    }
    else if (tool == Circle){
        std::cout << "The active tool is a Circle" << std::endl;
    }
    else if (tool == Square){
        std::cout << "The active tool is a Square" << std::endl;
    }

    return 0;
}