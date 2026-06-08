#include <iostream>

int main(){
	/*
	Veremos punteros hacia chars, estos tienen un comportamiento
	especial, por eso los tratamos de manera separada.

	Uno de los features, es que lo podemos inicializar con un C-String.
	Pero ojo, no todos los compiladores va a permitir hacerlo.

	La lógica detrás es bastante simple, el compilador al "imprimir"
	un array de chars (un C-string) se dirije al valor al que apunta
	el puntero, luego imprime cad char hasta que se encuentra con
	un char nulo.

	Por eso al imprimir el puntero, imprime el string. Y al 
	desreferenciarlo, imprime el primer char.

	OJO: si inicializamos con un C-string, entonces tenemos un
	const char array. NO TRATAR DE MODIFICAR CHARS.

	*/
	const char *message {"Hello World!"}; //Compile error converting string constant to char*. 
	
	std::cout << "message : " << message << std::endl;
	
	// No va a permitir modificar ningún valor del C-string.
	//
	//Allow users to modify the string;
	char message1[] {"Hello World!"};
	message1[0] = 'h';
	std::cout << "message1: " << message1 << std::endl;

	return 0;
}
