#include <iostream>

#include <NeuralNetwork.h>

#include <fstream>

int main()
{
    std::cout << "\033[32mTEST 1...\033[0m";
    
    NeuralNetwork<2, 2, 1> brain;

    std::cout << "\033[1;32m\rTEST 1 PASSED\033[0m\n";

    //std::cout << "\033[1;31m\rTEST 1 UNSUCCESSFUL\033[0m\n";
    return 0;
}