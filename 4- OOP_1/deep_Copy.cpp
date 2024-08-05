#include <iostream>

class MyNumber
{
private:
    int *val1;
    int val2;

public:
    MyNumber(int a = 3, int b = 5);
    //Deep Copy Constructor
    MyNumber(const MyNumber &another);
    ~MyNumber();
    void print_value_address();
};
void func1(MyNumber x)
{
}
MyNumber func2()
{
    MyNumber e(1, 2);
    return e;
}
int main(int argc, char const *argv[])
{
    MyNumber a (10,15);
    MyNumber b(a);
    a.print_value_address();
    b.print_value_address(); //Address of B will be different from a addresses
    

    return 0;
}

// Functions Definition
MyNumber::MyNumber(int a, int b)
{
    val1 = new int;
    *val1 = a;
    val2 = b;
}
MyNumber::MyNumber(const MyNumber &another)
{
    std::cout << "Deep Copy Constructor" << std::endl;
    val1 = new int;
    *val1 = *another.val1;
    val2 = another.val2;
}
MyNumber::~MyNumber()
{
    delete[] val1;
    val1 = nullptr;
}
void MyNumber::print_value_address()
{
    std::cout << "Value 1 = " << *val1 << " Address of Value 1 =" << val1 << std::endl;
    std::cout << "Value 2 = " << val2 << " Address of Value 2 =" << &val1 << std::endl;
}
