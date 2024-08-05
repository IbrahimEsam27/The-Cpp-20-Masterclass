#include <iostream>

class A
{
private:
    int private_value1 = 10;
    int private_value2 = 20;
    void hidden_func()
    {
        std::cout << "I'm Hidden" << std::endl;
    }

public:
    friend class B;
};

class B
{
public:
    void Access_A1(A &x) // use reference when parameter is object from another classs
    {
        std::cout << "private_value1 = " << x.private_value1 << std::endl;
    }
    void Access_A2(A &x)
    {
        std::cout << "private_value2 = " << x.private_value2 << std::endl;
        x.hidden_func();
    }
};

int main(int argc, char const *argv[])
{
    A a;
    B b;

    b.Access_A1(a);
    b.Access_A2(a);

    return 0;
}
