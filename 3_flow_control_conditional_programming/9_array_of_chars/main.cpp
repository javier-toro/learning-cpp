#include <iostream>

int main(){
	/*
	Ahora vemos un array de chars, muy similar a python podemos
	expresar un str como un array de chars, podemos hacer print
	de nuestra "palabra". Algo interesante, es que podemos hacer un
	print directo, aparece la palabra si printeamos el array. 

	También vemos el null termination string para que sea bien,
	interpretado por el compilador. Este se expresa como '\0'.
	Esto es importante si los elemntos de nuestro string son menos
	que el tamaño del array (se llenan los espacios no ocupados con
	valores basura).

	También se puede hacer c-strings literales. Iniciar el array
	de chars como char message[]{"Hello"} como un C-string.

	Recuerdo: Para strings ocupamos ", y para char '.
	*/
	
	//Declare array
	char message [5] {'H', 'e', 'l', 'l', 'o'};

	//Print out the array through looping.
	//Este método no es el mejor.
	for (auto c : message){
		std::cout << c;
	}
	std::cout << std::endl;

	//Change characters in our array
	message[1] = 'a'; // Queda Hallo, alemán.

	//Print out the array through looping.
	//Este método no es el mejor.
	for (auto c : message){
		std::cout << c;
	}
	std::cout << std::endl;

	//Podemos hacer un print directo (solo en char array)
	std::cout << "message: " << message << std::endl;
	// Se imprimen términos basura, hay que darle un término.
	char message_2 [6] {'H', 'e', 'l', 'l', 'o', '\0'};
 	std::cout << "message: " << message_2 << std::endl;

	// Llamamos C-String a los string que terminan con el char nulo.
	// Si le damos un espacio extra al array de lo que dejamos
	// los inicializa automaticamente con el char nulo.
	
	return 0;
}
