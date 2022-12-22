#include <iostream>
#include <random>

std::string gerar() {
    std::string CPF = "";
    std::random_device randomNumber;
    std::mt19937 seed(randomNumber());
    std::uniform_int_distribution<int> gap(0, 9);
    for (int i = 0; i < 11; ++i) 
        CPF.append(std::to_string(gap(seed)));
    return CPF;
}

int main() {
    std::cout << "CPF'S gerados: " << std::endl;
    for (int i = 0; i < 10; ++i) 
        std::cout << gerar() << std::endl;
}