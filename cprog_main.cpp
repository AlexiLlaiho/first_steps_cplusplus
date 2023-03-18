#include <iostream>
#include <math.h>
#include <cstdint>

void sortFunc(unsigned int& a2, unsigned int& b2, unsigned int& c2);

int main()
{
    unsigned int a, b, c;    
    while(std::cin >> a >> b >> c){
    sortFunc(a, b, c);
        if((a+b) > c){
            if(pow(a,2) + pow(b,2) == pow(c,2)){
                std::cout << "YES" << std::endl;    
            } else{
                std::cout << "NO" << std::endl;
            }            
        }
        else{
            std::cout << "UNDEFINED" << std::endl;
        }
    }
    return 0;    
}

void sortFunc(unsigned int& a2, unsigned int& b2, unsigned int& c2){
    unsigned int local_max;
        if(b2 > a2){
            if(c2 < b2){
                local_max = b2;
                b2 = c2;
                c2 = local_max; 
            }
        }          
        else{
            if(c2 < a2){
                local_max = a2;
                a2 = c2;
                c2 = local_max;
            }
        }
}