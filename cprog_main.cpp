#include <iostream>
#include <math.h>
#include <cstdint>

int main()
{
    unsigned int index;
    unsigned int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    unsigned int year;    
    while(std::cin >> index >> year){    
        if(year % 400 == 0){
            if(index == 2)            
                std::cout << month[index]+1 << std::endl; //yes
            else
                std::cout << month[index] << std::endl; //yes
        }
        else if(year % 100 == 0){
            std::cout << month[index] << std::endl; //no
        }
        else if(year % 4 == 0)
            if(index == 2)            
                std::cout << month[index]+1 << std::endl; //yes
            else
                std::cout << month[index] << std::endl; //yes
        else
             std::cout << month[index] << std::endl; //no
    }
    return 0;    
}