#include <iostream>
/*
Al igual que la mayoría de lenguajes, C++ permite modificar una variable en una sola línea. Por ej:
int x{5};
x += 1;
x *= 2;
x /= 2;
x -= 1;
x %= 2;
etc...

A esto lo llamamos "Operador de asignación compuesto".

Es importante mencionar que como siempre el type de la variable declarada, siempre va a ser estático. 
Por lo que al usar un operador, el resultado va a ser la mejor aproximación al tipo de la variable.
*/
int main(){
    int value{45};
    std::cout << "Valor inicial: " << value << std::endl;
    value += 5; // value = value + 5
    std::cout << "Después de += 5: " << value << std::endl;
    value *= 2; // value = value * 2
    std::cout << "Después de *= 2: " << value << std::endl;
    value /= 3; // value = value / 3
    std::cout << "Después de /= 3: " << value << std::endl;
    value -= 10; // value = value - 10
    std::cout << "Después de -= 10: " << value << std::endl;
    value %= 2; // value = value % 2
    std::cout << "Después de %= 2: " << value << std::endl;
    return 0;
}