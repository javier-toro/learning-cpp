#include <iostream>

/*
En este cap veremos el concepto de incrementos.

Estos pueden ser aplicados como pre-incremento o post-incremento, según se escriba.

- Pre-incremento: ++x (incrementa el valor de x antes de usarlo)
- Post-incremento: x++ (usa el valor de x antes de incrementarlo)
- Incremento simple: x += 1

Se tiene lo mismo para decrementos.

Solo se puede incrementar/decrementar por 1.

Solo sirve para los operadores + y -.
*/

int main(){

    int value{5};

    // Incremento simple
    value += 1; // value ahora es 6
    std::cout << "value: " << value << std::endl;

    // Reset value
    value = 5;

    // Decremento simple
    value -= 1; // value ahora es 4
    std::cout << "value: " << value << std::endl;

    std::cout << "========= Postfix Increment and Decrement =========" << std::endl;

    // Reset value
    value = 5;

    std::cout << "The value is (incrementing): " << value++ << std::endl; // Imprime 5, luego incrementa a 6
    std::cout << "value: " << value << std::endl;

    // Reset value
    value = 5;

    std::cout << "The value is (decrementing): " << value-- << std::endl; // Imprime 5, luego decrementa a 4
    std::cout << "value: " << value << std::endl;

    std::cout << "========= Prefix Increment and Decrement =========" << std::endl;

    // Reset value
    value = 5;

    std::cout << "The value is (incrementing): " << ++value << std::endl; // Incrementa a 6, luego imprime 6
    std::cout << "value: " << value << std::endl;

    // Reset value
    value = 5;

    std::cout << "The value is (decrementing): " << --value << std::endl; // Decrementa a 4, luego imprime 4
    std::cout << "value: " << value << std::endl;
    return 0;
}