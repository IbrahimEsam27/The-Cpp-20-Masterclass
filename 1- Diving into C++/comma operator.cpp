#include <iostream>

int main(int argc, char const *argv[])
{
    int increment{5};
    int number1{10};
    int number2{20};
    int number3{25};

    //Comma Operator Exuecutes from Left To Right
    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
    std::cout << "Increment = " << increment << std::endl; // 8
    std::cout << "Number 1 = " << number1 << std::endl; // 60
    /*Tricky: 20 not 13 because we didn't assign the value to number 2 
    but in number1 and number3 we assign the value to the variable*/
    std::cout << "Number 2 = " << number2 << std::endl; 
    std::cout << "Number 3 = " << number3 << std::endl; // 33
    std::cout << "Result = " <<result << std::endl; // 33

    return 0;
}
