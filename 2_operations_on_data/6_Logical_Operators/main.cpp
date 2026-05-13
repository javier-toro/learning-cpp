#include <iostream>

/*
El objetivo principal de este cápitulo es ver operadores lógicos. 
Es bastante simple todavía, pero es importante verlo. 
*/
int main(){

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha; // Muestra true/false en vez de 1/0
    std::cout << "a: " << a << std::endl;    
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;

    // Operador AND (&&)
    // El resultado es true solo si ambos operandos son true
    std::cout << "a && b: " << (a && b) << std::endl; // false
    std::cout << "a && c: " << (a && c) << std::endl; // true
    std::cout << "a && b && c: " << (a && b && c) << std::endl; // false 

    std::cout << std::endl;

    // Operador OR (||)
    // El resultado es true si al menos uno de los operandos es true
    std::cout << "a || b: " << (a || b) << std::endl; // true
    std::cout << "b || c: " << (b || c) << std::endl; // true
    std::cout << "a || b || c: " << (a || b || c) << std::endl; // true

    std::cout << std::endl;

    // Operador NOT (!)
    // Invierte el valor lógico de su operando
    std::cout << "!a: " << (!a) << std::endl; // false
    std::cout << "!b: " << (!b) << std::endl; // true
    std::cout << "!c: " << (!c) << std::endl; // false

    // Se pueden combinar operadores lógicos para crear expresiones más complejas
    // Se pueden combinar operadores lógicos con relacionales



    return 0;
}