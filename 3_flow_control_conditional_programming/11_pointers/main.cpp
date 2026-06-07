#include <iostream>

int main(){
	/*
	Ahora veremos qué es un puntero. Un concepto fundamental para el
	buen entendimiento de la memoria. Cada valor/variable guardado en
	memoria tiene una "dirección" (address) asociada. Un puntero es 
	algo tan simple como una variable, que tiene como valor la address
	de otra variable. Se puede pensar que es una variable que apunta
	a otra (o a un valor en memoria).
	
	Veremos cómo se declaran y cómo se ocupan. 
	
	Para declararlo:

	<type> * <var_name> {}; //apunta a un tipo específico.
	
	Al guardar un address, siempre tiene el mismo tamaño. 

	*/
	
	// Declare and initiaalize pointer
	int *p_number {};
	double *p_fractional_number{};

	// Explicitly initialize with nullptr
	int *p_number1 {nullptr};
	int *p_fractional_number1 {nullptr};

	//Pointres to different variables are of the same size
	std::cout << "sizeof(int) :" << sizeof(int) << std::endl;
	std::cout << "sizeof(double) :" << sizeof(double) << std::endl;
	std::cout << "sizeof(double*) :" << sizeof(double*) << std::endl;
	std::cout << "sizeof(p_number1) :" << sizeof(p_number1) << std::endl;
	std::cout <<"sizeof(p_fractional_number1) :" << sizeof(p_fractional_number1) << std::endl;

	// No importa la posición de * para un puntero. 
	
	// Podemos guardar punteros que apuntan realmente a variables xd.
	int int_var {43}; 
	int *p_int_var{&int_var}; // & is the address operator

	std::cout << "int var: " << int_var << std::endl;
	std::cout << "p_int (Address in memory): " << p_int_var << std::endl;
	// Podemos modificar el puntero
	int int_var1 {65};
	p_int_var = &int_var1; //Le asignamos un nuevo address
	std::cout << "p_int (New address): " << p_int_var << std::endl;

	// Solo se le puede asignar la dirección de una variable de su tipo. 
	//Dereferencing a pointer :
	int *p_int2 {nullptr};
	int int_data {56};
	p_int2 = &int_data;

	std::cout << "value: " << *p_int2 << std::endl;

	return 0;
}
