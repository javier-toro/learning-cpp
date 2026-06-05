#include <iostream>

int main(){
	/*
	Ahora veremos el while loop que mencionamos brevemente en el cap anterior,
	a diferencia del for loop que funciona en base a una iteracion este,
	sigue ejecutando el bloque de codigo hasta que se deje de cumplir una condicion
	logica. 
	*/	
	unsigned int i{0}; // Incializamos el indice.
	
	const size_t COUNT{10}; //Recordamos que es mejor no hard-codearlo
				
	while (i < COUNT){
		//Whatever we want the loop to run
		std::cout << i+1 << " : repetitive task" << std::endl;
		++i;
	}
	std::cout << "Loop done!" << std::endl;

	return 0;

}

