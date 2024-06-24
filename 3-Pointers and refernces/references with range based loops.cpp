#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[]{1, 2, 3, 4, 5};
    /*in this way the variable (i) will have the copy of the value of the array in each iteration,
    but it's just a copy; so changing a value of i will not affect the original array*/
    for (auto i : arr)
    {
        i = i * 10;
    }
    std::cout << "Element 1 = " << arr[0] << std::endl;
    std::cout << "Element 2 = " << arr[1] << std::endl;
    std::cout << "Element 3 = " << arr[2] << std::endl;
    std::cout << "Element 4 = " << arr[3] << std::endl;
    std::cout << "Element 5 = " << arr[4] << std::endl;

    std::cout << "======================" << std::endl;

    /*Using refernce to modify each element in the array it self because the reference is
    an alias for the real element of array*/
    for (auto &i : arr)
    {
        i = i * 10;
    }
    std::cout << "Element 1 = " << arr[0] << std::endl;
    std::cout << "Element 2 = " << arr[1] << std::endl;
    std::cout << "Element 3 = " << arr[2] << std::endl;
    std::cout << "Element 4 = " << arr[3] << std::endl;
    std::cout << "Element 5 = " << arr[4] << std::endl;

    return 0;
}
