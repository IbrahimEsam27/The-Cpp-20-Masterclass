#include <iostream>
#include <string>
#include <vector>

/*Parent Class == Base Class in C++ , SuperClass in Java , General Class*/
class Person
{
protected:
    std::string name = "Mohamed";
    std::string email = "ibrahimesam170@gmail.com";
    std::string national_id;
    std::string address;

public:
    bool IsValidFormat();
    void SetName(const std::string &name);
};
bool Person::IsValidFormat()
{
    return true;
}
void Person::SetName(const std::string &name)
{
    this->name = name;
}

/*Child Class == Derived Class , Subclass , Specific*/
class Student : public Person
{
private:
    int starting_study_year;
    double GPA;
    std::vector<int> studied_courses;

public:
    void AddCourseGrade(int course_id, double grade);
    void PrintGPA() const;
    void SetGPA(double gpa);
};
void Student::AddCourseGrade(int course_id, double grade)
{
}
void Student::PrintGPA() const
{
    std::cout << "Name of Student is " << name << " ,and GPA = " << GPA << std::endl;
}
void Student::SetGPA(double gpa)
{
    GPA = gpa;
}

class Teacher : public Person
{
private:
    int starting_employment_year;
    double Salary;
    std::vector<int> teachng_courses;

public:
    void AddCourse(std::string course_id);
    void SetCurrentSalary(double currentsalary);
    void PrintTeacherInfo();
};
void Teacher::AddCourse(std::string course_id)
{
}
void Teacher::SetCurrentSalary(double currentsalary)
{
    this->Salary = currentsalary;
}
void Teacher::PrintTeacherInfo()
{
    std::cout << "Name of Teacher is " << name << " ,and Salary = " << Salary << std::endl;
}
int main(int argc, char const *argv[])
{
    Student student;
    // Student is a person
    student.SetGPA(2.3);
    student.SetName("Ibrahim Esam Ibrahim");
    student.PrintGPA();

    Teacher teacher;
    teacher.IsValidFormat();
    /*If not set so the name here or on the parent it will be empty, if set in only parent so it will be used*/
    teacher.SetName("Mr. Hamed");
    teacher.SetCurrentSalary(5000.0);
    teacher.PrintTeacherInfo();

    return 0;
}
