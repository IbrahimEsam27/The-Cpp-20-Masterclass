#include <iostream>
#include <string>

/*Parent Class == Base Class in C++ , SuperClass in Java , General Class*/
class Person
{
private:
    double Salary;

public:
    std::string name = "Ibrahim Esam";
    std::string email = "ibrahimesam170@gmail.com";

    bool IsValidFormat()

    {
        return true;
    }
};

/*Child Class == Derived Class , Subclass , Specific*/
class Student : public Person
{
private:
    double GPA;

public:
    void PrintGPA() const;
    void SetGPA(double gpa);
};

void Student::PrintGPA() const
{
    std::cout << "Name of Student is " << name << " ,and GPA = " << GPA << std::endl;
}
void Student::SetGPA(double gpa)
{
    GPA = gpa;
}

int main(int argc, char const *argv[])
{
    Student student;
    // Student is a person
    student.SetGPA(2.3);
    student.IsValidFormat();
    student.PrintGPA();

    // Person is not necessarily a Student
    Person person;
    person.IsValidFormat();
    // person.PrintGPA(); //Because it's one of student functions
    return 0;
}
