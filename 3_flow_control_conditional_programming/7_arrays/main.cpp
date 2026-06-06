#include <iostream>
/*
Ahora veremos arrays. Es una estructura de datos con memoria asignada fija, la manera mas 
facil de verla es como una concatenacion en memoria de los ints que estan dentro de el

A diferencia de idiomas de + alto nivel, C++ literal busca un espacio libre en memoria
del tamaño del array.

Algo importante a tener en consideracion es no pasarse de los boundaries del array
C++ te permite hacerlo, y uno podria estar leyendo datos importantes en memoria
que puede causar hasta error del sistema operativo xd.

Al momento de inicializar un array, uno puede:

-Declarar el espacio sin inicializar elementos.
-Declarar el espacio declarando elementos (no necesariamente todos los elementos).
-No declarar el espacio, pero si los elementos (asume que el size es el de los elementos).
-Se pueden inicializar con const (no permite modificar sus valores).

ARRAYS STORE ELEMENTS OF THE SAME TYPE.
*/

int fibonacci(int* an_array ,int number){
	if(number==0){
		return 0;
	}
	if (number==1){
		return 1;
	}else{
		return an_array[number-2]+an_array[number-1];
	}
}

int main(){
	
	//Declaramos el array de ints.
	int scores [10]; // Junk data

	//Read data
	std::cout << "scores[0] : " << scores[0] << std::endl;	
	
	//Mejor leerlo con un loop
	for( size_t i{0}; i < 10 ; ++i){
		std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
	}

	//Write data into an array
	for (size_t i{0}; i < 10; ++i){
		scores[i]=fibonacci(scores,i);
	std::cout << "We store the fibonacci number: " << fibonacci(scores,i) << std::endl;
	}

	std::cout << scores << std::endl;
	
	//Declare and initialize at the same time
	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

	for (size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "]: " << salaries[i] << std::endl;
	}

	//If you don't initialize all the elements, those you leave out
	//are initialized to 0
	
	int families[5] {12, 7, 5};

	for (size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "]: " << families[i] << std::endl;
	}

	// omit the size of the array at declaration
	// it will infer size from the number of elements when initializing.
	
	int class_size[] {10,12,15,11,18,17};

	for (auto value : class_size){ //range-based for loop
		std::cout <<"value :" << value << std::endl;
		// we can iterate values in arrays instead of index.
	}

	// Non-modifiable array.
        const int birds[] {10,12,15,11,18,17};

	// Operations on arrays
	int scores_2[] {2,5,8,2,5,6,9};
	int sum{0};

	for( int element: scores_2){
		sum += element;
	}
	std::cout << "Scores sum : " << sum << std::endl;
	

	return 0;
}
