#include <iostream>

int main(){

    // Addition
    int nro1 {5};
    int nro2 {7};

    int result = nro1 + nro2;

    std::cout << "The result is: " << result << std::endl;

    //Subtraction
    result = nro2 - nro1;
    std::cout << "The result is: " << result << std::endl;

    result = nro1 - nro2;
    std::cout << "The result is: " << result << std::endl;

    // Multiplication

    result = nro1 * nro2;
    std::cout << "The result is: " << result << std::endl;

    //Division

    result = nro2 / nro1;
    std::cout << "The result is: " << result << std::endl;

    //Modulus
    result = nro2 % nro1;
    std::cout << "The result is: " << result << std::endl;
    return 0;
}