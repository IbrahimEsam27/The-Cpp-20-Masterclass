#include <iostream>

int main(int argc, char const *argv[])
{
    char value1 = 65;
    std::cout << "Value_1 as a Character = " << value1 << std::endl;
    // static_cast used to transform between data types
    std::cout << "Value_1 as an Integer = " << static_cast<int> (value1) << std::endl; 
    return 0;
}
