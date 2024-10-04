#include "generate.hpp"

int main() {
    std::cout << "genarated CPF's: " << std::endl;
    for (int i = 0; i < 10; ++i) 
        std::cout << generate() << std::endl;
}
