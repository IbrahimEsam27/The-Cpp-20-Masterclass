#include <iostream>

int main(int argc, char const *argv[])
{
    int int_value{33};
    double double_value{33.5};

    int &reference_to_int_value{int_value};
    double &refernce_to_double_value{double_value};

    std::cout << "Integer value = " << int_value << std::endl;
    std::cout << "Address of Integer value = " << &int_value << std::endl;

    std::cout << "Reference to Integer value = " << reference_to_int_value << std::endl;
    std::cout << "Address of Reference to Integer value = " << &reference_to_int_value << std::endl;

    std::cout << "Double value = " << double_value << std::endl;
    std::cout << "Refernce to Double value = " << refernce_to_double_value << std::endl;

    std::cout << "Address of Double value = " << &double_value << std::endl;
    std::cout << "Address of Refernce to Double value = " << &refernce_to_double_value << std::endl;

    reference_to_int_value = 4;
    refernce_to_double_value = 5.5;
    std::cout << "=======================================" << std::endl;
    std::cout << "Integer value = " << int_value << std::endl;
    std::cout << "Address of Integer value = " << &int_value << std::endl;

    std::cout << "Reference to Integer value = " << reference_to_int_value << std::endl;
    std::cout << "Address of Reference to Integer value = " << &reference_to_int_value << std::endl;

    std::cout << "Double value = " << double_value << std::endl;
    std::cout << "Refernce to Double value = " << refernce_to_double_value << std::endl;

    std::cout << "Address of Double value = " << &double_value << std::endl;
    std::cout << "Address of Refernce to Double value = " << &refernce_to_double_value << std::endl;

    return 0;
}
