#include <iostream>

/*
A diferencia de los otros types, el auto permite al compilador asignar el tipo de la variable
automaticamente. Por lo mismo su uso en memoria también depende del tipo de variable asignada.

Obs:

- No se puede ver cuánta memoria ocupa auto.
- No se puede inicializar vacío un auto.
*/

int main(){
    
    auto var1 {12}; //int -> 4 bytes 
    auto var2 {13.0}; // double -> 8 bytes
    auto var3 {14.0f}; // float -> 4 bytes
    auto var4 {15.0l}; // long double -> 16 bytes
    auto var5 {'a'}; // char -> 1 byte

    //int modifiers suffixes
    auto var6 {123u}; // unsigned int -> 4 bytes
    auto var7 {123ul}; // long int -> 4 bytes
    auto var8 {123ll}; // long long int -> 8 bytes

    std::cout << "var1: " << var1 << " bytes: " << sizeof(var1) << std::endl;
    std::cout << "var2: " << var2 << " bytes: " << sizeof(var2) << std::endl;
    std::cout << "var3: " << var3 << " bytes: " << sizeof(var3) << std::endl;
    std::cout << "var4: " << var4 << " bytes: " << sizeof(var4) << std::endl;
    std::cout << "var5: " << var5 << " bytes: " << sizeof(var5) << std::endl;
    std::cout << "var6: " << var6 << " bytes: " << sizeof(var6) << std::endl;
    std::cout << "var7: " << var7 << " bytes: " << sizeof(var7) << std::endl;
    std::cout << "var8: " << var8 << " bytes: " << sizeof(var8) << std::endl;

    return 0;
}