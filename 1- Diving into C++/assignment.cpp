#include <iostream>

int main(int argc, char const *argv[])
{
    auto x{333u};
    
    //Compiler will put value = (max positive int - your value) because considering X unsigned int 
    x = -1; 
    std::cout << "X = " << x << std::endl;

    bool state {false};
    std::cout << std::boolalpha; // to print state fals or true on consle not 0 and 1
    std::cout << "State is " << state << std::endl;
    return 0;
}
