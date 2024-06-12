#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int number1;
    std::string name1;
    std::cout << "Enter Your Name" << std::endl;
    std::getline(std::cin, name1);
    std::cout << "Enter Your Age" << std::endl;
    std::cin >> number1;
    std::cout << "Your Name is " << name1 << " and Your age is " << number1 << std::endl;
    std::cerr << "There is an error" << std::endl;

    return 0;
}
