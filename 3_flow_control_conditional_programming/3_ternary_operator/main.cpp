#include <iostream>

int main(){
    /*
     El objetivo principal de este code es ver expreciones del tipo
     ternarias donde se permite asignar un valor a una variable en funcion
     de una condicion logica.
     */
    int max{};

    int a{35};
    int b{200};

    std::cout << std::endl;
    std::cout << "using regular if" << std::endl;

    if (a > b){
    	max = a;
    }else{
	max = b;
    }
    
    std::cout << "max(a,b): " << max << std::endl;

    // otra manera de verlo

    max = (a > b)? a : b; //Ternary operator

    std::cout << "max con ternary operator: " << max <<std::endl;
    return 0;
}
