#include <iostream>

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle() : width(0), height(0)
    // Delegating Constructor
    {
    }
    Rectangle(int width, int height) : width(width), height(height)
    {
    }
    // Member Initilizer List ->> This is the only way for Const and Refenences

    void print_width_height()
    {
        std::cout << "Width = " << width << " Height = " << height << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle r1(5, 6);
    Rectangle r2;

    r1.print_width_height();
    r2.print_width_height();
}
