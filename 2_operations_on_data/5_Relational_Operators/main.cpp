#include <iostream>

/*
La idea principal de este cápitulo es ver operadores relacionales y lógicos básicos.
*/
int main(){

    int number1 {45};
    int number2 {60};

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; // Muestra boleanos como true o false.
    std::cout << "number1<number2: " << (number1 < number2) << std::endl;
    std::cout << "number1<=number2: " << (number1 <= number2) << std::endl;
    std::cout << "number1>number2: " << (number1 > number2) << std::endl;
    std::cout << "number1>=number2: " << (number1 >= number2) << std::endl;
    std::cout << "number1==number2: " << (number1 == number2) << std::endl;
    std::cout << "number1!=number2: " << (number1 != number2) << std::endl;

    std::cout << std::endl;
    std::cout << "store comparisons in variables" << std::endl;
    
    bool result {number1 == number2};
    std::cout <<"number1 == number2: "<<" ------>   result = " << result << std::endl;

    return 0;
}