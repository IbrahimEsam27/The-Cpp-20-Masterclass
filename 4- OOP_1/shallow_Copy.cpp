#include <iostream>

class MyNumber
{
private:
    int *val1;
    int val2;

public:
    MyNumber(int a = 3, int b = 5);
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
    MyNumber my_class(1, 3);
    my_class.print_value_address();
    std::cout << "=================================" << std::endl;

    /*Copy Constructor works with 4 cases*/
    MyNumber a;
    MyNumber b(10, 15);

    MyNumber c(b);  // Copy constructor to build C with B
    MyNumber d = b; // Copy Constructor to initilize and declaration
    func1(c);       // Copy Constructor to pass object (Must not be Reference)
    func2();        // Copy Constructor to return Object (Must not be Reference)

    a = b; // Assignment not copy
    /*While having pointer in my class created with new so when assignening contructor to another
    will create massive problem that there is more than object points to the same adresses*/
    std::cout << "A .... Printing" << std::endl;
    a.print_value_address();
    std::cout << "=================================" << std::endl;
    std::cout << "B .... Printing" << std::endl;
    b.print_value_address();
    std::cout << "=================================" << std::endl;
    std::cout << "C .... Printing" << std::endl;
    c.print_value_address();
    std::cout << "=================================" << std::endl;
    std::cout << "D .... Printing" << std::endl;
    d.print_value_address();
    std::cout << "=================================" << std::endl;

    return 0;
}
// Function Definition
MyNumber::MyNumber(int a, int b)
{
    val1 = new int;
    *val1 = a;
    val2 = b;
}
MyNumber::~MyNumber()
{
    // delete[] val1;
    // val1 = nullptr;
}
void MyNumber::print_value_address()
{
    std::cout << "Value 1 = " << *val1 << " Address of Value 1 =" << val1 << std::endl;
    std::cout << "Value 2 = " << val2 << " Address of Value 2 =" << &val1 << std::endl;
}
