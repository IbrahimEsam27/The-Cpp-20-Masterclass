#include <iostream>

class A;

class B
{
public:
    void Access_A1(A &x);
    void Access_A2(A &x);
};

class A
{
private:
    int private_value1 = 15;
    int private_value2 = 17;
    void Hidden_func()
    {
        std::cout << "Iam Hidden" << std::endl;
    }

public:
    // friend function only access my private data
    friend void B::Access_A1(A &x);
    // We can put any global function to access our private data
    friend void printA(A &x);
};

void B::Access_A1(A &x)
{
    std::cout << "Value 1 inside class A = " << x.private_value1 << std::endl;
}
void B::Access_A2(A &x)
{
    // std::cout << "Value 1 inside class A = " << x.private_value1 << std::endl;
}

void printA(A &x) // Global function to access Class A private data becaues it's friend to the class
{
    std::cout << "Value 1 inside class A = " << x.private_value1 << std::endl;
    std::cout << "Value 2 inside class A = " << x.private_value2 << std::endl;
    x.Hidden_func();
}
int main(int argc, char const *argv[])
{
    A a;
    B b;

    b.Access_A1(a);
    b.Access_A2(a); // will just access the public data not private
    std::cout << "========================" << std::endl;
    printA(a);

    return 0;
}
