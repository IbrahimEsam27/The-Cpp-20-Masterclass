#include <iostream>

class A
{
public:
    int x, y;
    A(int x, int y = 0) : x(x), y(y)
    {
    }
    A() : x(0), y(0)
    {
    }
};

class B : public A
{
private:
    int z;

public:
    /*By default Constructors don't be inherited so if we want t inherit we do the following starts from C++11
    This way ou take the constructor from parent class and can use it*/
    using A::A;
};

int main(int argc, char const *argv[])
{
    B b(3, 4);
    std::cout << b.x << " " << b.y << std::endl;

    return 0;
}
