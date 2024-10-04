#include "generate.hpp"

int main(int argc, char** argv) {
    std::cout << argv[1] << " generated CPF's: " << std::endl;
    for (int i = 0; i < std::atoi(argv[1]); ++i) 
        std::cout << generate() << std::endl;
}
