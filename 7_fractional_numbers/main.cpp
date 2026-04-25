#include <iostream>
#include <iomanip>
/*
A pesar de que el vídeo explica que son los tipos:
- double
- float
- long double
No explica explicitamente cómo se guardan, así que explicaré en lo que sigue lo que entendí
del IEEE 754 de la representación de números fraccionales.

Expresamos el número en notación científica, por ej:

1.34 = 134e-2

la base del nro o parte significante la llamamos mantissa, y la otra el exponent. 
Nos aprovechamos de su representación en binario:

1.xxxx * 2^(exponent)

La mantisa siempre comienza en 1. 
Por ejemplo, en binario:

0.0010101 = 1.0101*2^(-3)

Entonces ese uno queda implícito.

Existen dos tipos

Los single precision:

- 1 bit para el signo -> 0: positivo -> 1: negativo
- 8 bits para el exponente [0, 2^8 -1] -> los exponentes van [-2^7+1, 2^7] = [-127, 128]
- 23 bits para la mantissa

Los double precision:

- 1 bit para el signo
- 11 bits para el exponente 
- 52 bits para la mantisa

Se tienen casos especiales:

exponente = 0, mantisa = 0 -> 0
exponente = 0, mantisa != 0 -> subnormal (números muy cercanos a 0)
exponente = 255, mantisa = 0 -> infinito
exponente = 255, mantisa != 0 -> NaN

*/

/*
Ahora sí con la parte más de programación. Algunas observaciones al momento de dar el input
a la variable hay que declarar si es float (f al final), o long (L al final), es double por default,
entonces si tengo el str sin las letras al final, puede que el compilador lo interprete como un double,
y trate de pasarlo a float o long double perdiendo información. OJO.
*/

int main(){
    
    // Declaración e inicialización de variables

    float nro1{1.12345678901234567890f};
    double nro2{1.12345678901234567890};
    long double nro3{1.12345678901234567890L};

    //Printeamos tamaños en memoria

    std::cout << "--------------------- Memory usage ---------------------" << std::endl;
    std::cout << "sizeof float : " << sizeof(float) << " bytes" << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << " bytes" <<  std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << " bytes" <<  std::endl;

    //Precisión
    std::cout << "--------------------- Some examples ---------------------" << std::endl;
    std::cout << std::setprecision(20); //Controlamos la precisión del print
    std::cout << "number 1 is: " << nro1 << std::endl; // 7 digits
    std::cout << "number 2 is: " << nro2 << std::endl; // 15'ish digits
    std::cout << "number 3 is: " << nro3 << std::endl; // 15+ digits

    //Algunos problemas: La precisión es muy limitada
    //Sabemos que el float tiene precisión de 7 digitos

    float nro4{123456789.0f}; //Silent Error: narrowing conversion
    std::cout << "number4 :" << nro4 << std::endl;

    // Se puede ocupar notación científica

    std::cout << "--------------------- Scientific notation ---------------------" << std::endl;

    double nro5{1.23e10};
    double nro6{0.00000000023};
    double nro7{2.3e-10};

    std::cout << "number5 is: " << nro5 << std::endl;
    std::cout << "number6 is: " << nro6 << std::endl;
    std::cout << "number7 is: " << nro7 << std::endl;

    // Infinity and NaN
    std::cout << "--------------------- Infinity and NaN ---------------------" << std::endl;
    
    double nro8{5.6};
    double nro9{}; //vale 0
    double nro10{}; // vale 0

    //Infinity
    double infty{ nro8 / nro9};

    std::cout << nro8 << " / " << nro9 << " = " << infty << std::endl;
    std::cout << nro8 << " + " << infty << " = " << nro8 + infty << std::endl;

    //NaN
    double nan{nro9 / nro10};

    std::cout << nro9 << " / " << nro10 << " = " << nan << std::endl;



    return 0;
}