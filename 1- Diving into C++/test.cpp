#include <iostream>

// (consteval) appeared since C++20
consteval int get_value()
{
    return 3;
}
int main(int argc, char const *argv[])
{
    constexpr int value = get_value();
    std::cout << "Value = " << value << std::endl;
    return 0;
}
