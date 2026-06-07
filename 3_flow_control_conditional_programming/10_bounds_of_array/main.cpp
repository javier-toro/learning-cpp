#include <iostream>

int main(){
	/*
	Vemos sobre límites de un array. A diferencia de Rust
	C++ no es memory-safe, permite al usuario acceder memoria
	a la cuál no debería tener permiso, incluso memoria siendo
	usada por el sistema operativo u otros programas. 

	Esto se menciona, pues al acceder un array ocupa arítmetica de 
	puntero, entonces, si intentamos acceder un valor fuera de los 
	límites del array nos va a permitir hacerlo, y no sabemos qué
	memoria estaremos accediendo o modificando. 
	*/

	int numbers[] {1,2,3,4,5,6,7,8,9,0};

	//Leemos fuera de los límites del array.
	//Leerá valores basura o hará que el programa crashee.
	
	std::cout << "numbers[12] :" << numbers[12] << std::endl;

	//Moraleja: SIEMPRE REVISAR LIMS DE ARRAYS.

	return 0;
}
