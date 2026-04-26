#include <iostream>

/*
No vemos nada descabellado realmente, lo que veremos ahora es que una vez tengo una variable de cierto tipo,
se le puede asignar un valor. Vamos a tener también especial cuidado en el caso que asignemos un valor a una variable 
tipo auto.
*/
int main(){

    int var1{123}; // Signed integer
    std::cout << "var1: " << var1 << std::endl;

    var1 = 456; // Reassigning a new value to var1
    std::cout << "var1 after reassignment: " << var1 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    double var2{44.55}; // double floating-point number
    std::cout << "var2: " << var2 << std::endl;

    var2 = 99.99; // Reassigning a new value to var2
    std::cout << "var2 after reassignment: " << var2 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    bool state{true}; // boolean variable
    std::cout << std::boolalpha; // Enable boolean alpha representation
    std::cout << "state: " << state << std::endl;

    state = false; // Reassigning a new value to state
    std::cout << "state after reassignment: " << state << std::endl;

    std::cout << "-----------------------------" << std::endl;
    // Auto type deduction

    auto var3{333u}; // var3 is deduced to be of type unsigned int
    std::cout << "var3: " << var3 << std::endl;
    var3 = -22; // It will give out an overflow error, -22 is not representable in an unsigned int
    // It will interpret the bit representation value of -22 as an unsigned integer.
    // It will also won't give any compile-time error.
    std::cout << "var3 after reassignment: " << var3 << std::endl; 

    return 0;
}
