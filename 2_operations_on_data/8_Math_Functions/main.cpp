#include <iostream>
#include <cmath>

int main(){
    double weight{7.7};

    std::cout << "The weight is: " << weight << std::endl;
    
    //floor
    std::cout << "Weight rounded to floor: " << std::floor(weight) << std::endl;
    //ceil
    std::cout << "Weight rounded to ceil: " << std::ceil(weight) << std::endl;
    //abs
    double savings {-5000.0};
    std::cout << "The savings is: " << savings << std::endl;
    std::cout << "The absolute value of savings is: " << std::abs(savings) << std::endl;

    //exp(x)=e^x
    double exponential = std::exp(10);

    std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;

    //log
    std::cout << "log(e) is: " << std::log(std::exp(1)) << std::endl;

    //log10
    std::cout << "log10(10000) is: " << std::log10(10000) << std::endl;

    //sqrt
    std::cout << "sqrt(81) is: " << std::sqrt(81) << std::endl;

    //round
    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounded to : " << std::round(2.4) << std::endl;
    return 0;
}