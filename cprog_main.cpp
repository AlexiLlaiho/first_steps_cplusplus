#include <iostream>
#include <math.h>
#include <cstdint>

int main()
{
    unsigned int num_day;    
    unsigned int days_quantity;
    unsigned int space = 0; 

    while(std::cin >> num_day >> days_quantity){
        if(num_day != 7)
        {
            space = num_day - 1;
            for(int i = 0; i < space; i++)
            {
                std::cout << " ";
            }
            for(int i:days_quantity)
            {
                std::cout << " " << i;
            }
            std::cout << std::endl;
        }
        else{
            space = 6;
            for(int i = 0; i < space; i++)
            {
                std::cout << "  ";
            }    
            std::cout << "1";
        }        
    }
    return 0;    
}