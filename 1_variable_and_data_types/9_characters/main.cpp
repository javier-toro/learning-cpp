#include <iostream>

/*
Los chars nos permite guardar caracteres:

- chars = 1 byte -> 256 valores posibles

Ocupa la ASCII Table para ver las representaciones
*/
int main(){

    char char1{'h'};
    char char2{'o'};
    char char3{'l'};
    char char4{'a'};

    std::cout << "----------- Example ------------" << std::endl;
    std::cout << char1 << std::endl;
    std::cout << char2 << std::endl;
    std::cout << char3 << std::endl;
    std::cout << char4 << std::endl;


    std::cout << "------------ Memory Usage ------------" << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << "byte" << std::endl;

    char char5=65; //Le asignamos un nro entero
    std::cout << "------------ Interpretation as int ------------" << std::endl;
    std::cout <<"value: " << char5 << std::endl;
    std::cout <<"value(int): " << static_cast<int>(char5) << std::endl;
        
    return 0;
}