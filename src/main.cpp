#include "gerar.hpp"

int main() {
    std::cout << "CPF'S gerados: " << std::endl;
    for (int i = 0; i < 10; ++i) 
        std::cout << gerar() << std::endl;
}
