#include <iostream>

int main(){
	/*
	Una cosa importante a tener en consideración en lo que sigue, es el funcionamiento
	del memory layout de C++. Lo primero que hay que entender es que el programa en sí,
	no tiene acceso real a la memoria física, se le entrega una memoria virtual "limpia",
	para que el programa pueda ocupar completamente. 

	Sin embargo, la mayoría del trabajo real lo hace el OS, la CPU y la MMU (Memory
	Management Unit). Son ellos los que se encargan de alocar, modificar, escribir las
		variables que necesita el programa en la RAM. 

	Por otro lado, esta memoria virtual no está desorganizada, sino que tiene una
	estructura bien definida que está dividida como sigue:

	-1. System          ---------> OS command line arguments
	-2. Stack 	    ---------> Variables locales (definidas dentro de funciones)
	-3. Heap            ---------> Memoria dinámica (new/malloc)
	-4. BSS Segment     ---------> Globales sin inicializar
	-5. Data Segment    ---------> Globales inicializadas explicitamentes
	-6. Text.           ---------> Binario compilado (solo lectura)
	
	Lo que veremos ahora, es cómo hacer uso dinámico de la memoria, usar el heap.
	Release and Resetting.
	Entender el tiempo de vida de una variable (entender el mecanismo scope).

	ADVERTENCIAS:

	- NO ELIMINAR DOS VECES EN UN PUNTERO.
	*/

	// Como hemos ocupado punteros ahsta ahora
	int number {22};

	int* p_number = &number;

	std::cout << std::endl;
	std::cout << "Declaring pointer and assigning address : " << std::endl;
	std::cout << "number : " << number << std::endl;
	std::cout << "p_number : " << p_number << std::endl;
	std::cout << "&number : " << &number << std::endl;
	std::cout << "*p_number : " << *p_number << std::endl;

	int* p_number1; //Unitialized pointer, contains junk address
	int number1 {12};
		p_number1 = &number1; //Make it point to a valid adress
	std::cout << std::endl;
	std::cout << "Unitialized pointer : " << std::endl;
	std::cout << "*p_number1 : " << *p_number1 << std::endl;
	
	//BAD: Writing into unitialized pointer through dereference
	//What's actually reliable
	
	//Dynamic heap memory
	int *p_number4{nullptr}; // Unitialized pointer
	p_number4 = new int; // Dynamically allocate space for a single int on the heap.
			    // This memory belongs to our program from now on.
			    // The system can't use it for anything else, untill we return
			    // it. After this line executes, we will have a valid memory
			    // location allocated. The size of the allocated memory will be
			    // such that it can store the type pointe to by the pointer.
	*p_number4 == 77; //Writing into dynamically allocated memory
	std::cout << std::endl;
	std::cout << "Dynamically allocating memory :" <<std::endl;
	std::cout << "*p_number4 : " << *p_number4 << std::endl;
	std::cout << "address : " << p_number4 << std::endl;

	delete p_number4; // We release the used memory on the heap
	p_number = nullptr; // We usually set it to nullptr, to make explicit that we
			    // cannot use it now.
	
	//It also possible to initialize the pointer with a valid
	//address up on declaration. Not with a nullptr.
	int *p_number5{ new int}; // Memory location contains junk value
	int *p_number6{ new int (22)}; // use direct initialization
	int *p_number7{ new int {23}}; // use uniform initialization
			  
	std::cout << std::endl;
	std::cout << "Initialize with valid memory address at declaration : " << std::endl;
	std::cout << "*p_number5 : " << *p_number5 << std::endl; // Junk value

	std::cout << "p_number6 : " << p_number6 << std::endl;
	std::cout << "*p_number6 : " << *p_number6 << std::endl; // Junk value

	std::cout << "p_number7 : " << p_number7 << std::endl;
	std::cout << "*p_number7 : " << *p_number7 << std::endl; // Junk value
	
	// Remember to release the memory
	delete p_number5;
	p_number5 = nullptr;

	delete p_number6;
	p_number6 = nullptr;

	delete p_number7;
	p_number7 = nullptr;

	// We can reuse pointers
	p_number5 = new int(81);
	std::cout << "*p_number5 new value: " << *p_number5 << std::endl;

	delete p_number5;
	p_number5 = nullptr;

	// BAD: calling delete twice on a pointer. We will try to delete a value that it
	// may not be owned by the program. 

	return 0;
}
