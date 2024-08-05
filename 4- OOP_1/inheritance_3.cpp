#include <iostream>
#include <string>

/*Parent Class == Base Class in C++ , SuperClass in Java , General Class*/
class Person
{
protected:
    std::string name;

public:
    Person() : name("Ibrahim")
    {
        std::cout << "Default Constructor Called of Person" << std::endl;
    }
    Person(std::string name) : name(name)
    {
        std::cout << "2nd Constructor called of Person" << std::endl;
    }
    ~Person()
    {
        std::cout << "Person Destructor Called" << std::endl;
    }
};

/*Child Class == Derived Class , Subclass , Specific*/
class Student : public Person
{
private:
    double GPA;

public:
    Student() //can't acces name in parent constructor and set value with initilizer list : because the name is still being created
    {
        std::cout << "Default Constructorn of Student Class" << std::endl;
        GPA = 0;
        name = "Hani";
    }
    Student(double gpa) : Person("Ali"), GPA(gpa) // call the parent Constructor with value to call second constructor of parent
    {
        std::cout << "Second Constructor of Student Class" << std::endl;
    }
    ~Student()
    {
        std::cout << "Student Destructor called" << std::endl;
    }
};

class Teacher : public Person
{
private:
public:
};

int main(int argc, char const *argv[])
{
    Student s1;
    Student s2(2.3);
    return 0;
}
