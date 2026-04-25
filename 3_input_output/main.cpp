#include <iostream>
#include <string>

int main(){
    /*
    std::cout << "Hello C++ 20" << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message: Something went wrong" << std::endl;
    
    std::clog << "Log message: Something happened" << std::endl;
    */
    // Data import raw, without spaces
    /*
    int age1;
    std::string name;

    std::cout << "Por favor escriba su nombre y edad" << std::endl;

    std::cin >> name; 
    std::cin >> age1;

    //Output message
    std::cout << "Hola " << name << ". Usted tiene " << age1 << " años!" << std::endl;
    */
   // Data with spaces
   std::string full_name;
   int age3;

   std::cout << "Please type full name" << std::endl;

   std::getline(std::cin,full_name);

   std::cout << "Pleas type your age" << std::endl;
   std::cin >> age3;

   std::cout << "Hola " << full_name << ". Usted tiene " << age3 << " años!" << std::endl;
    return 0;
}