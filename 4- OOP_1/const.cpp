#include <iostream>

class rectangle
{
private:
    //It's beter to avoid const member functon variables
    double width;
    double height;

public:
    rectangle();
    rectangle(double width_, double height_);
    double GetWidth() const; // put the fn const cause it ain't change member variable
    void SetWidth(double width_);
    double GetHeight() const;
    void SetHeight(double height_);
    /*Using Const when knowing that the function will not change in member variables 
    (We should put const fn as much as we can)*/
    double calcArea() const;
    double calcPermitive() const;
};

int main(int argc, char const *argv[])
{
    const rectangle r1; // when put const object so we can only call the const function
    // r1.SetHeight()--->will give comiler error
    r1.GetHeight();

    /*here data is const so i can call just const functios*/
    const rectangle* r2 = new rectangle(4,2);
    r2->calcArea();
    //r2->SetHeight(5); //this is compuiler error
    r2 = & r1; //this is valid

    /*here pointer is constant no the data*/
    rectangle* const r3 = new rectangle(9,8); 
    r3->SetHeight(15.2); //valid
    //r3 = &r1 ; //This is not valid

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
double rectangle::GetWidth() const
{
    return width;
}
void rectangle::SetWidth(double width_)
{
    this->width = width_;
}
double rectangle::GetHeight() const
{
    return height;
}
void rectangle::SetHeight(double height_)
{
    this->height = height_;
}
double rectangle::calcArea() const
{
    // if tried to put width = 1 ---> Compiler error because the fn is const can't change member variables
    return width * height;
}
double rectangle::calcPermitive() const
{
    return (width + height) * 2;
}