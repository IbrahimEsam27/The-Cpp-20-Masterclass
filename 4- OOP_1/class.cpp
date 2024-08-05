#include <iostream>

class rectangle
{
private:
    double width;
    double height;

public:
    // Functions Declaration
    /*If There s no Default Constructor, it will craete default constructor with
     the values in private data which will be zero if not set, or any value if set*/
    rectangle(); 
    /*If there is no default constructor in my clas and just have parametrized constructor, we can't 
    call default contructor in main fucntion so, you should normalize to define default constructor*/
    rectangle(double width_, double height_);
    double GetWidth();
    void SetWidth(double width_);
    double GetHeight();
    void SetHeight(double height_);
    double calcArea();
    double calcPermitive();
};

int main(int argc, char const *argv[])
{
    rectangle r1;
    r1.SetHeight(15);
    r1.SetWidth(15);
    std::cout << "Permitive = " << r1.calcPermitive() << std::endl;
    rectangle r2(3, 4);
    std::cout << "Area = " << r2.calcArea() << std::endl;
    return 0;
}
// Functions Definitions
rectangle::rectangle()
{
    width = height = 0;
}

rectangle::rectangle(double width_, double height_)
{
    width = width_;
    height = height_;
}
double rectangle::GetWidth()
{
    return width;
}
void rectangle::SetWidth(double width_)
{
    this->width = width_;
}
double rectangle::GetHeight()
{
    return height;
}
void rectangle::SetHeight(double height_)
{
    this->height = height_;
}
double rectangle::calcArea()
{
    return width * height;
}
double rectangle::calcPermitive()
{
    return (width + height) * 2;
}