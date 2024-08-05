#include <iostream>
#include <vector>

class test
{
public:
    static int x; // Declared shared among all objects
};
int test::x = 10; // Static member is drclared inside class but defined outside it

void func()
{
    test::x += 10;
}

class A
{
};
class B
{
public:
    int f;
    B(int a, int b)
    {
        f = 10;
    }
};

class C
{
public:
    static std::vector<int> v;
    static int arr[10];
    static A a;
    static B b;
};

std::vector<int> C::v = std::vector<int>(20);
int C::arr[10];
A C::a;
B C::b = B(1, 2);

int main(int argc, char const *argv[])
{
    test::x += 1;
    func();
    /*Note that no objsects created but the static var exist and will be till end of the program*/
    std::cout << "X = " << test::x << std::endl;
    std::cout << "=================================" << std::endl;
    std::cout << C::b.f << std::endl;
    return 0;
}
