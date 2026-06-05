#include <iostream>

int main(){
	/*
	Ahora veremos una nueva construccion que divide el loop en dos partes:
	do y while.

	Ejecutamos un bloque de codigo si es que se cumple una condicion.
	Ahora mostraremos un ejemplo simple.

	A diferencia de while simple, primero ejecuta el codigo y luego hace el test
	de que se cumple la condicion logica.
	
	*/	
	const size_t COUNT{10}; //Recordamos que es mejor no hard-codearlo
	size_t i{0};
				
	do{
		std::cout << i << " : repetitive task" << std::endl;	
		++i;
	}while( i < COUNT);	
	std::cout << "Loop done!" << std::endl;

	return 0;

}

