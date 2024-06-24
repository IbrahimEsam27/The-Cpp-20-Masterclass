#include <iostream>

int main(int argc, char const *argv[])
{
    int value1{15};
    int &reference_value1{value1};
    int *Ptr_value1{&value1};

    int value2 {24};
    int value3 {30};

    std::cout << "reference to value1 = " << reference_value1 << std::endl;
    std::cout << "*ptr pf value1 = " << *Ptr_value1 << std::endl;
    std::cout << "Address of value1 = " << &reference_value1 << std::endl;
    std::cout << "Address of value1 = " << Ptr_value1 << std::endl;
    std::cout << "==============================" << std::endl;
    //Writing throug reference
    /*the reference will point at the same location, so when assigning another value to
    the refernce , it just take its value not to point on its address like pointers*/
    reference_value1 = value2; 
    std::cout << "reference to value1 = " << reference_value1 << std::endl;
    std::cout << "*ptr pf value1 = " << *Ptr_value1 << std::endl;
    std::cout << "Address of value1 = " << &reference_value1 << std::endl;
    std::cout << "Address of value1 = " << Ptr_value1 << std::endl;

    Ptr_value1 = &value3;

    std::cout << "==============================" << std::endl;
    std::cout << "reference to value1 = " << reference_value1 << std::endl;
    std::cout << "*ptr pf value1 = " << *Ptr_value1 << std::endl;
    std::cout << "Address of value1 = " << &reference_value1 << std::endl;
    std::cout << "Address of value1 = " << Ptr_value1 << std::endl;


    return 0;
}
