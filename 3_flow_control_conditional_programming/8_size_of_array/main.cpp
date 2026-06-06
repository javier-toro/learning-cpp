#include <iostream>

int main(){
	/*
	Veremos como podemos obtener el tamaño de un array en runtime
	el problema, es que se pude modificar el tamaño de un array
	agregando o eliminando elementos, con std::size podemos ver el tamaño.

	Antiguamente se obtenía el tamaño del array completo con sizeof, y se dividía
	por el tamaño de un elemento. Con eso se conseguía el nro de elementos. 
	*/
	
 	int scores [] {1,2,3,4,5,6,7,8};

	//old-school: sizeof(scores)/sizeof(scores[0]))
	
	std::cout << "sizeof(scores): " << sizeof(scores) << std::endl;
	std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std::endl;
	std::cout << "# elements (scores): " << sizeof(scores)/sizeof(scores[0]) << std::endl;

	int count { sizeof(scores) / sizeof(scores[0]) };
	
	//range-base for loop: si solo necesitamos los elementos
	//index for loop: si necesitamos tambien el indice
	
	int count_2 {std::size(scores)};

	std::cout << "Old-school method: " << count << std::endl;
	std::cout << "std::size: " << count << std::endl;

	return 0;
}
