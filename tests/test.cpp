#include "../random_range.hpp"
#include <iostream>


int main() {
    for( int i = 0; i < 10; i++) { 
        std::cout << "Random float " << i << " = " << random_real<float>(0, 200) << std::endl;
    }

    for( int i = 0; i < 10; i++ ) { 
        std::cout << "Random int " << i << " = " << random_int<int>(0, 200) << std::endl;
    }
}
