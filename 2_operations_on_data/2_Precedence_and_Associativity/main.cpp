#include <iostream>

/*
Lo importante de esta parte es tener consideración que diferentes operaciones tienen diferente prioridad.
Y si tienen la misma prioridad, tienen distinto orden de asociatividad.

Si bien con las operaciones básicas que hemos aprendido hasta ahora pareciera ser obvio.
Esto cuando vayamos conociendo nuevas operaciones, puede ser un poco confuso.

Por lo mismo, se recomienda siempre usar paréntesis para dejar lo más claro posible el orden.

A la prioridad la llamamos Precedence.
A la asociatividad la llamamos Associativity.
*/

int main(){

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = a + b * c - d / e -f + g;

    std::cout << "result: " << result << std::endl;

    return 0;
}