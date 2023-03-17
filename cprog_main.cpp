#include <iostream>
#include <math.h>
#include <cstdint>

int main()
{
    int x1, y1, x2, y2;    
    while(std::cin >> x1 >> y1 >> x2 >> y2){
        if((x2 == x1) || (y2 == y1) || (abs(x2 - x1) == abs(y2 - y1))){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;    
}