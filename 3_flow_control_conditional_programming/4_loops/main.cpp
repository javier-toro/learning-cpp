#include <iostream>

int main(){
	/*
	Ocuparemos loops, la idea es simple, en el momento que tengamos
	que hacer una tarea repetitiva, en vez de repetir el code podemos
	dejarlo dentro de un for loop. Por otro lado si queremos hacer un proceso
	que dependa de algun indice o indice multiple podemos tambien ocupar loops.

	Hay varios tipos:
	- for loops
	- while loops

	Una cosa interesante que podemos hacer es  inicializar el indice en la iteracion
	y luego de correrla "desaparece" no queda guardado como variable. Tambien se puede
	incializar el indice antes del comienzo del loop, de tal manera podemos acceder a
	el por fuera del loop.

	Una cosa importante
	*/	
	
	//for loop: la manera correcta.
	
	for (unsigned int i{0} ; i < 10 ; ++i){
		//Whatever we want the loop to run
		std::cout << i+1 << " : repetitive task" << std::endl;
	}
	std::cout << "Loop done!" << std::endl;

	//Use size_t : a representatio of some unsigned int for positive numbers [sizes]
	
	for (size_t i{0} ; i < 10 ; ++i){
		std::cout << "Mish" << std::endl;
	}


	std::cout << "sizeof(size_t) : " << sizeof(size_t) << "bytes" << std::endl;
	
	//Otra manera de acceder al iterador luego de que se hace un for loop es declararlo
	//antes
	size_t i{0}; //Iterador declarado fuera
	
	for (i ; i < 10 ; ++i) {
		std::cout << "Loop step : " << i << std::endl;
	}

	std::cout << "Loop done, final iteration saved : " << i << std::endl;
	
	// Es malo dejar valores hard-codeados
	// Se puede declarar el nro de iteraciones afuera como:
	// const size_t COUNT{100};
			
	return 0;

}

