#include <iostream>
#include <string>

class A
{
public:
    int getValue()
    {
        return 10;
    }
    std::string getStr()
    {
        return "Hello from Parent Class";
    }
};

class B : public A
{
public:
    int getValue()
    {
        return 20;
    }
};

int main(int argc, char const *argv[])
{
    B obj;
    // use getValue of the Child not to the Parent
    std::cout << obj.getValue() << std::endl;
    // use getStr of the Parent not to the Child because the child doesn't have one
    std::cout << obj.getStr() << std::endl;
    return 0;
}
