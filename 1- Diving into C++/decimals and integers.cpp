#include <iomanip>
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Braced Initialization {}
    int a{5};
    int b{10};

    // Conversion from Double to Integer isn't Allowed with {}
    // int c {2.9};
    int d{a + b};
    std::cout << "D = " << d << '\n';

    // Functional Initialization ()
    int x(20.5); // Conversion from Double to Integer is Allowed with ()
    std::cout << "X = " << x << std::endl;

    // Assignment Notation
    int z = 26;
    std::cout << "X = " << z << std::endl;

    // Can't Explict -300 the negative value to an unsigned which is positive when using Braced init{}
    // unsigned int g {-300};
    // std::cout << "G = " << g << std::endl;

    unsigned int h(-300); // is Allowed in functional Initilization
    std::cout << "H = " << h << std::endl;

    // char value2 { 256};     //is not Allowed
    // std::cout << "Value2 = " <<  value2 << std::endl;

    char value3 = 257;
    printf("Value_3 = %d\n", value3);

    /*precision of Double is greater than Float so when using fraction in the number we consider the
     double is greater than float, but if don't use fractions in the number we conider the equal*/
    float num1{3.1};
    double num2{3.1};
    if (num1 == num2)
        std::cout << "Two Numbers are equal" << std::endl;
    // will print Number2 considering it greater than Number1
    else if (num2 > num1)
        std::cout << "The Duoble Number is Greater than Float Number" << std::endl;
    else
        std::cout << "The Float Number is Greater than Double Number" << std::endl;

    float number3{12345678};
    printf("Number 3 = %f\n", number3);
    /*float division / 0 Prints (infintiy) if the float is posotive
    and prints (-inf) if negative and print nan if 0.0 / 0.0*/
    std::cout << "Float / 0 = " << 0.05 / 0.0 << std::endl;

    // the default of the fraction is double, so when using a float or a bouble we should put suffix
    /*because of Percision of float is 7 digits, so compiler print the
    first 7 digits then rest of numbers is garbage*/
    std::cout << std::setprecision(20);
    float float_number{1.123456789f};
    double double_number{1.12356789};
    long double long_double_number{1.123456789L};
    std::cout << "Float number = " << float_number << "\nDouble number = " << double_number
              << "\nLong Double Number = " << long_double_number << std::endl;
    return 0;
}
