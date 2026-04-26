#include <iostream>
#include <limits>

int main(){
    /*
    OJO IMPORTANTE

    1 byte = 8 bits

    Por default el int ocupa 4 bytes, donde también admite números negativos.

    4 bytes:
    - unsigned int: [0, 2^(32)-1]
    - signed int: [-2^(31),2^(31)-1] Es mover el intervalo positivo a la mitad y dejar el cero en el lado positivo.

    Ahora si ocupamos una variante short es un poco lo mismo solo que tenemos menos opciones.

    2 bytes:
    - unsigned short int: [0, 2^(16)-1]
    - signed short int: [-2^(15), 2^(15)-1]

    8 bytes:
    - unsigned long int: [0, 2^(64)-1]
    - signed short int:  [-2^(63), 2^(63)-1]

    No se pueden concatenar los long long, ni short short, etc. Se puden combinar si como descrito anteriormente.

    En caso de elegir un número fuera de ese rango genera un error de compilado.
    */
    int value1{10};
    int value2{-300};

    std::cout << "---------------- Default Int Variable ---------------------" << std::endl;
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: "<< value2 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl; // 4 bytes
    std::cout << "sizeof(value2): " << sizeof(value2) << std::endl; // 4 bytes

    short signed int value3{-32768};
    short unsigned int value4{65535};

    std::cout << "---------------- Short Int Variable ---------------------" << std::endl;
    std::cout << "value3: " << value3 << std::endl;
    std::cout << "value4: "<< value4 << std::endl;
    std::cout << "sizeof(value3): " << sizeof(value3) << std::endl; // 2 bytes
    std::cout << "sizeof(value4): " << sizeof(value4) << std::endl; // 2 bytes

    long signed int value5{-9223372036854775807L -1};
    unsigned long int value6{18446744073709551615UL};

    std::cout << "---------------- Long Int Variable ---------------------" << std::endl;
    std::cout << "value5: " << value5 << std::endl;
    std::cout << "value6: "<< value6 << std::endl;
    std::cout << "sizeof(value5): " << sizeof(long int) << std::endl; // 8 bytes
    std::cout << "sizeof(value6): " << sizeof(value6) << std::endl; // 8 bytes

    std::cout << "---------------- Resumen ---------------------" << std::endl;
    std::cout << "long long int: "<< sizeof(long long int) << " bytes" << std::endl;
    std::cout << "long int: " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "short int: " <<sizeof(short int) << " bytes" << std::endl;



    /*
    OJO: Algo importante que aprendí es que el compilador te va a dar warning si el Literal es decir,
    el valor literal que ingresas a la variable es demasiado grande entonces no tiene un tipo claro antes de,
    pasarlo a la variable.

    Se puede agregar las letras siguientes al final.

    L: Signed Long
    UL: Unsigned Long

    Le ayuda a interpretar

    Además al momento de ingresar el literal si se ingresa con signos el compilador primero lee el número,
    si está fuera del rango positivo (por ejemplo el mínimo) va a generar error, entonces es mejor tomar
    un número más pequeño y restarle uno.

    Ej:

    Quiero guardar el nro -2^(15) en un short.
    Escribo literalmente:
    short signed int value3{-nrograndeL} No va a servir nro grande está fuera del rango positivo.
    entonces:
    short signed int value3{-(nrogrande-1)L -1} Ahí si.

    */
    


    return 0;
}