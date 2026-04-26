// This brings iostream library
// This is how we comment on one line
/*
This
is a multiple line
comment
*/
#include <iostream>

int main(){

    for (size_t i = 0; i < 10; i++)
    {   
        std::cout << i+1 << " Javier Toro" << std::endl;
    }
    // Run time error
    float value= 7/2;
    std::cout << "value : " << value << std::endl;
    return 0;
} 