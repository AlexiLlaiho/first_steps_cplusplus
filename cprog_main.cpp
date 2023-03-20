#include <iostream>
#include <math.h>
#include <cstdint>

int main()
{
    unsigned int year;    
    while(std::cin >> year){    
        if(year % 400 == 0){            
            std::cout << "YES" << std::endl;
        }
        else if(year % 100 == 0){
            std::cout << "NO" << std::endl;
        }
        else if(year % 4 == 0)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;    
}