#include <iostream>

int AddNumber(int number1, int number2)
{
    return number1 + number2;
}

int main(int argc, char const *argv[])
{
    int number1= 13, number2{15}; // Assignment with {} shoul be the same type of int cannot be float
    float number3 {15.5};
    std::cout << "Sum of Two numbers = " << AddNumber(number1, number2) << std::endl;

    return 0;
}
