#include <iostream>
/*
 * Dangling Pointers as the name says so, are pointers that are not being
 * used. We have different  cases:
 * - Unitialized pointer
 * - Deleted pointer
 * - Multiple pointers pointing to same memory
 * Obviously this can be dangerous because the risk of trying to access
 * unknown memory space. 
 
 Theres many solutions:
 - Initialize your pointers directly after declaring it.
 - Reset pointers after delete to nullptr.
 - Make sure the owner pointer is very clear. 
*/
int main(){
	// Case1: Unitialized pointer
	int * p_number; //Dangling unitialized pointer
	
	std::cout << "Case 1: Unitialized pointer : ." << std::endl;
	//std::cout << "p_number : " << p_number << std::endl;
	//std::cout << "*p_number : " << *p_number << std::endl; // CRASH!
	

	// Case2: Deleted pointer
	std::cout << std::endl;
	std::cout <<"Case 2: Deleted pointer" << std::endl;
	int * p_number1 {new int{67}}; // 67
	
	std::cout << "*p_number1 (before delete) : " << *p_number1 << std::endl;

	//delete p_number1;

	//std::cout << "*p_number1 (after delete) : " << *p_number1 << std::endl;
	// Here we access memory that's not ours
	
	//Case3: Multiple pointers pointing to same address
	std::cout << std::endl;
	std::cout << "Case 3: Multiple pointers pointing to same address : " << std::endl;

	int *p_number3 {new int{83}};
	int *p_number4 {p_number3};

	std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
	std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

	//Deleting p_number3
	delete p_number3;

	//p_number4 points to deleted memory. Dereferencing it will lead to
	//undefined behaviour : Crash/ garbage or whatever
	std::cout<< "p_number4(after deleting p_number3)" << p_number4 << " - " << *p_number4 << std::endl;

	//Deleting p_number 3
	// delete p_number3;
	
	// p_number4 points to deleted memory. Dereferencing it will lead to
	// undefined behaviour : Crash/garbage or whatever.

	std::cout << "Program is ending well" << std::endl;

	return 0;
}
