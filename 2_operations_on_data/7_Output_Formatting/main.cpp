#include <iostream>
#include <iomanip>
#include <limits>
/*
Ahora nos interesamos a ver como formatear los outputs en consola.

std::endl, agrega un salto de línea. 
std::flush, vacía el buffer de salida, fuerza a que se imprima en ese momento.
std::setw(n), establece un ancho mínimo de campo. (Sirve para alinear texto).
std::right, std::left
std::internal, establece alineación dentro del campo.
std::setfill(c), establece el carácter de relleno.
std::boolalpha, fuerza a que los valores booleanos se impriman como true o false.
std::showpos, muestra el símbolo de más positivo.
std::dec, std::oct, std::hex, establece la base númerica de un entero.
std::showbase, muestra el prefijo de la base numérica.
std::uppercase, muestra los dígitos hexa en mayus.
std::scientific, std::fixed, Muestra los floats en not. científica o con nro de decimales fijos.
std::setprecision(n), establece el número de decimales.
std::showpoint, muestra el punto decimal, incluso si no hay decimales.

*/
int main(){

    // std::endl, y \n.

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "--------------------" << std::endl;
    
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    //=========================================================
    //std::flush, vacía el buffer de salida.
    std::cout << std::endl;
    std::cout << "This is a nice message ..." << std::flush;
    // Aquí podríamos hacer algo que tome tiempo, y el mensaje se imprimiría antes de que termine esa tarea.
    
    //=========================================================
    // std::setw(n), establece un ancho mínimo de campo.

    int col_width{10};
    std::cout << std::endl;
    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Age" << std::setw(col_width) <<std::endl;
    std::cout << std::setw(col_width) << "Alice" << std::setw(col_width) << 30 << std::setw(col_width) << std::endl;
    std::cout << std::setw(col_width) << "Bob" << std::setw(col_width) << 25 << std::setw(col_width) << std::endl; 
    std::cout << std::setw(col_width) << "Charlie" << std::setw(col_width) << 35 << std::setw(col_width) << std::endl;

    //=========================================================
    // std::right, std::left, std::internal
    
    std::cout << std::endl;
    int col_width_2{10};
    std::cout << std::left; // Alinea a la izquierda
    std::cout << std::endl;
    std::cout << std::setw(col_width_2) << "Name" << std::setw(col_width_2) << "Age" << std::setw(col_width_2) <<std::endl;
    std::cout << std::setw(col_width_2) << "Alice" << std::setw(col_width_2) << 30 << std::setw(col_width_2) << std::endl;
    std::cout << std::setw(col_width_2) << "Bob" << std::setw(col_width_2) << 25 << std::setw(col_width_2) << std::endl; 
    std::cout << std::setw(col_width_2) << "Charlie" << std::setw(col_width_2) << 35 << std::setw(col_width_2) << std::endl;

    // Right justification
    std::cout << std::right; // Alinea a la derecha
    std::cout << std::endl;
    std::cout << std::setw(col_width_2) << "Name" << std::setw(col_width_2) << "Age" << std::setw(col_width_2) <<std::endl;
    std::cout << std::setw(col_width_2) << "Alice" << std::setw(col_width_2) << 30 << std::setw(col_width_2) << std::endl;
    std::cout << std::setw(col_width_2) << "Bob" << std::setw(col_width_2) << 25 << std::setw(col_width_2) << std::endl; 
    std::cout << std::setw(col_width_2) << "Charlie" << std::setw(col_width_2) << 35 << std::setw(col_width_2) << std::endl;

    //Internal justified: sign is left justified, data is right justified
    std::cout << std::internal; // Alinea internamente
    std::cout << std::endl;
    std::cout << std::setw(col_width_2) << "X" << std::setw(col_width_2) << "Y" << std::setw(col_width_2) <<std::endl;
    std::cout << std::setw(col_width_2) << 1 << std::setw(col_width_2) << -1 << std::setw(col_width_2) << std::endl;
    std::cout << std::setw(col_width_2) << 2 << std::setw(col_width_2) << -2 << std::setw(col_width_2) << std::endl; 
    std::cout << std::setw(col_width_2) << 3 << std::setw(col_width_2) << -3 << std::setw(col_width_2) << std::endl;

    //=========================================================
    // std::setfill(c), establece el carácter de relleno.
    std::cout << std::endl;
    std::cout << std::setfill('*'); // Establece el carácter de relleno a '*'
    std::cout << std::setw(col_width_2) << "Name" << std::setw(col_width_2) << "Age" << std::setw(col_width_2) <<std::endl;
    std::cout << std::setw(col_width_2) << "Alice" << std::setw(col_width_2) << 30 << std::setw(col_width_2) << std::endl;
    std::cout << std::setw(col_width_2) << "Bob" << std::setw(col_width_2) << 25 << std::setw(col_width_2) << std::endl; 
    std::cout << std::setw(col_width_2) << "Charlie" << std::setw(col_width_2) << 35 << std::setw(col_width_2) << std::endl;

    //=========================================================
    // std::boolalpha, fuerza a que los valores booleanos se impriman como true
    // o false.
    std::cout << std::endl;
    bool is_sunny{true};
    std::cout << "Is it sunny today? " << std::boolalpha << is_sunny << std::endl;

    //=========================================================
    // std::showpos, muestra el símbolo de más positivo.
    std::cout << std::endl;
    std::cout << std::showpos; // Muestra el símbolo de más positivo
    std::cout << 42 << std::endl; // Imprime +42
    std::cout << -42 << std::endl; // Imprime -42

    //=========================================================
    // std::dec, std::oct, std::hex, establece la base númerica de un entero.
    std::cout << std::endl;
    int number{255};
    std::cout << "Decimal: " << std::dec << number << std::endl; // Imprime 255
    std::cout << "Octal: " << std::oct << number << std::endl; // Imprime 377
    std::cout << "Hexadecimal: " << std::hex << number << std::endl; // Imprime ff

    //=========================================================
    // std::showbase, muestra el prefijo de la base numérica.
    std::cout << std::endl;
    std::cout << std::showbase; // Muestra el prefijo de la base
    std::cout << "Decimal: " << std::dec << number << std::endl; // Imprime 255
    std::cout << "Octal: " << std::oct << number << std::endl; // Imprime 0377
    std::cout << "Hexadecimal: " << std::hex << number << std::endl; // Imprime 0xff    

    //=========================================================
    // std::uppercase, muestra los dígitos hexa en mayus.
    std::cout << std::endl;
    std::cout << std::uppercase; // Muestra los dígitos hexa en
    std::cout << "Hexadecimal: " << std::hex << number << std::endl; // Imprime 0xFF

    //=========================================================
    // std::scientific, std::fixed, Muestra los floats en not. científica
    // o con nro de decimales fijos.
    std::cout << std::endl;
    double pi{3.14159265358979323846};
    std::cout << "Default: " << pi << std::endl; // Imprime 3.14159
    std::cout << "Scientific: " << std::scientific << pi << std::endl; // Imprime 3.141593e+00
    std::cout << "Fixed: " << std::fixed << pi << std::endl; // Imprime 3.141593

//=========================================================
    // std::setprecision(n), establece el número de decimales.
    std::cout << std::endl;
    std::cout << std::setprecision(4); // Establece el número de decimales a 4
    std::cout << "Pi with 4 decimals: " << pi << std::endl; // Imprime 3.1416

    //=========================================================
    // std::showpoint, muestra el punto decimal, incluso si no hay decimales.
    std::cout << std::endl;
    double whole_number{42.0};
    std::cout << "Without showpoint: " << whole_number << std::endl; // Imprime 42
    std::cout << std::showpoint; // Muestra el punto decimal
    std::cout << "With showpoint: " << whole_number << std::endl; // Imprime 42.0000

    //=========================================================
    std::cout << std::endl;
    std::cout << std::dec << std::showbase; // Asegura que estamos en decimal y mostramos el prefijo
    std::cout <<"For a short variable the number goes from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

     return 0;
}