#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Hello from MasterClass C++20 " << std::endl;

    //Gives a Warning, it will compile with no problems 
    int value = 7 / 0;
    // runtime error the program craches at this Line
    std::cout << "Value = " << value << std::endl;
    return 0;
}
