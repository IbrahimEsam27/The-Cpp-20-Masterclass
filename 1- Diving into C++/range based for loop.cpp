#include <iostream>

int main(int argc, char const *argv[])
{
    int bag_of_values[]{1, 2, 3, 4, 5}; //Simple Array

    for (auto value : bag_of_values)
    {
        std::cout << "Element = " << value << std::endl;
    }

    for (auto i : {5, 6, 5, 7, 9, 5})
    {
        std::cout << "Element 2 = " << i << std::endl;
    }


    return 0;
}
