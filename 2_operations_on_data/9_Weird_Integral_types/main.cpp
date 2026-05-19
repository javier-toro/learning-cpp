#include <iostream>
/*
Int types with less than 4 bytes don't support arithmetic operations.
So when trying to perform arithmetic operations on them, the compiler automatically promotes them to int. 
Which is at least 4 bytes in size.
*/
int main(){
    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << "size of var1: " << sizeof(var1) << std::endl;
    std::cout << "size of var2: " << sizeof(var2) << std::endl;
    std::cout << "size of var3: " << sizeof(var3) << std::endl;
    std::cout << "size of var4: " << sizeof(var4) << std::endl;

    std::cout << std::endl;

    auto result1 = var1 + var2; // promoted to int
    auto result2 = var3 + var4; // promoted to int

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "size of result1: " << sizeof(result1) << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "size of result2: " << sizeof(result2) << std::endl;
    return 0;
}