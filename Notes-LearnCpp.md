# Notes C++20
### Braced Initialization{} Vs Functional Initialization()
 - **can't do casting with Braced Initialization**
```cpp
// Braced Initialization {}
int c {2.9};    // Conversion from Double to Integer isn't Allowed with {}
char value2 {256};     //is not allowed 
// Functional Initialization (), Less Safe Than Braced Initialization
int x (20.5);   // Conversion from Double to Integer is Allowed with ()
```
---
### Float Percision and Double
 - **precision of Double is greater than Float so when using fraction in the number we consider the double is greater than float, but if don't use fractions in the number we conider the equal**
```cpp
    float num1{3.1};
    double num2{3.1};
    if (num1 == num2)
        std::cout << "Two Numbers are equal" << std::endl;
    // will print Number2 considering it greater than Number1
    else if (num2 > num1)
        std::cout << "The Duoble Number is Greater than Float Number" << std::endl;
    else
        std::cout << "The Float Number is Greater than Double Number" << std::endl;
```
 - **Float just Consider first 7 digits as its percision so the following code will print first 7 digits correctly then garbage**
```cpp
    float number3(12345678910);
    printf("Number 3 = %f\n", number3);
```
 - **Using Braced Initialization {} you should put the number in float form with . if it's greater than 7 digits**
```cpp
float number3{12345670910.0};
```
 - **Division by zero in float**
```cpp
    /*float division / 0 Prints (infintiy) if the float is posotive 
    and prints (-inf) if negative and print nan if 0.0 / 0.0*/
    std::cout << "Float / 0 = " << 0.05 / 0.0 << std::endl;
```
 - **Putting Suffix when using float and long double**
the default of the fraction is double, so when using a float or a bouble we should put suffix because of Percision of float is 7 digits, so compiler print the first 7 digits then rest of numbers is garbage
```cpp
    float float_number {1.123456789f}; 
    double double_number {1.12356789};
    long double long_double_number {1.123456789L};
    std::cout << "Float number = " << float_number << " Double number = " << double_number
    << " Long Double Number = " << long_double_number<< std::endl;
```
---
### Why not make all functions inline and defined in a header file?

There are a few good reasons:

 - It can increase your compile times. When a function in a code file changes, only that code file needs to be recompiled. When an inline function in a header file changes, every code file that includes that header (either directly or via another header) needs to recompiled. On large projects, this can have a drastic impact.
 - It can lead to more naming collisions since you’ll end up with more code in a single code file.
 - **Reference:** [Inline Function - Learn Cpp](https://www.learncpp.com/cpp-tutorial/inline-functions-and-variables/)
---
### Simple notes 
 - To print state (false or true) on consle not (0 and 1)
```c
std::cout << std::boolalpha;
std::cout << "State is " << State << std::endl;
```
 - static_cast used to transform between data types
```cpp
    char value1 = 65;
    std::cout << "Value_1 as a Character = " << value1 << std::endl; //prints A
    std::cout << "Value_1 as an Integer = " << static_cast<int> (value1) << std::endl; //prints 65
```
 - Comma Operator Exuecutes from Left To Right
```cpp
    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
    std::cout << "Increment = " << increment << std::endl; // 8
    std::cout << "Number 1 = " << number1 << std::endl; // 60
    /*Tricky: 20 not 13 because we didn't assign the value to number 2 
    but in number1 and number3 we assign the value to the variable*/
    std::cout << "Number 2 = " << number2 << std::endl; 
    std::cout << "Number 3 = " << number3 << std::endl; // 33
    std::cout << "Result = " <<result << std::endl; // 33
```
 - std::cout makes the program slower, when printing something during for loop, it takes more time than if w don't print anything using std::cout
```cpp
    int count, number = 2;

    for (count = 0; count < 100000; count++)
    {
        number++;
        std::cout << "Count = " << count << std::endl; //Makes the program much slower
    }
    std::cout << "Done and The Count = " << count << " And The Number = " << number << std::endl;
```

---
### pointers vs references
 - You can't decalre a reference without initializing it because it's an alias to such variable and it has no exisist without initializng, but you can declare a pointer without initializing and it will have garbage value
```cpp
int& reference_value1 {}; //compiler error, it must be assigned to a variable
int* Ptr_value1; //not compiler error
```
 - the reference will point at the same location, so when assigning another value to
    the refernce , it just take its value not to point on its address like pointers
```cpp
    int value1 {15};
    int value2 {16};
    int& reference_value1 {value1};
    int* ptr_value1 {&value1};
    reference_value1 = value2; // means that will assign 16 the (value2) to value1 without any change in Addresses
    ptr_value1 = &value2 //means that pointer will point to another location and have its value
```
 - the reference is considered as a constant pointer so we can't change its address it's alias for
```cpp
int *const ptr_to_value = &value1;
int& reference_to_value = value1;
```
---
### references with range based loops
Modify Each elemnt in an aray with reference
 - In this following way the variable (i) will have the copy of the value of the array in each iteration, but it's just a copy; so changing a value of i will not affect the original array
```cpp
int arr[]{1, 2, 3, 4, 5};
    for (auto i : arr)
    {
        i = i * 10;
    }
    std::cout << "Element 1 = " << arr[0] << std::endl; // prints 1
```
 - Using refernce to modify each element in the array it self because the reference is
    an alias for the real element of array
```cpp
int arr[]{1, 2, 3, 4, 5};
    for (auto &i : arr)
    {
        i = i * 10;
    }
    std::cout << "Element 1 = " << arr[0] << std::endl; // prints 10
```
---
### Const and consept of leatst privilege 
 - Any user or program or proccess should have only the **minimum privilege** to perform their function
 - By making more const functions, you reduce the error might be done
```cpp
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
    /*Using Const when knowing that the function will not change in member variables (We should put const fn as much as we can)*/
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
```
- Const Member Variables must be initialized in **Definition or in Initializer list** ( Try to avoid them as possible)
- In function parameters use as possible (const someclass &name), it saves time and memory and telling that it won't change
---
### Static Data member and static function
 - At any class if no objsects created but the **static var** exist and will be till end of the program
```cpp
class test
{
public:
    static int x; // Declared shared among all objects
};
int test::x = 10; // Static member is drclared inside class but defined outside it
int main(int argc, char const *argv[])
{
    test::x += 1; //gives 11
    return 0;
}
```
 - The static Function is created when doing any functionality that doesn't depend on the object (doesn't use any data member) , it can't access the data members 
```cpp
class test
{
public:
    int x;
    static int factorial (int n)
    {
        x = 10 //Error because it's can't acess data members
        int res=1 ;
        for (int i = 0 ; i < n ; i++)
        {
            res *= i;
        }
        return res;
    }
};
```
 - **Static function Can access static data member only and can't access data members**
>Note: In static variables we declare variables inside the class ---- we must define it outside the class, 
>
>If we declared variable but not defineded that gives **compiler error** if that variable is used ,,**But** Not giving any errors if that variable not used.
>
>It gives **Linking Error**
---

### Vector Assignation
```cpp
std::vector<int> vector1, vector2, vector3;

vector1.push_back(1);
vector1.push_back(1);
vector1.push_back(1);

vector2.assign(3,1);
vector2.push_back(1);
vector2.push_back(1);

for (int i = 0 ; i < 3; i++)
{
    vector3.push_back(1);
}
    
std::cout << "Size of Vector1 = " << vector1.size() << " Capacity of Vector1 = " << vector1.capacity() << std::endl;
std::cout << "Size of Vector2 = " << vector2.size() << " Capacity of Vector2 = " << vector2.capacity() << std::endl;
std::cout << "Size of Vector3 = " << vector3.size() << " Capacity of Vector3 = " << vector3.capacity() << std::endl;

std::vector<int> vector4 = std::vector<int>(20);
    for (auto i = vector4.begin(); i < vector4.end(); i++)
    {
        std::cout << *i << " ";
    }
    vector4.push_back(1);
    std::cout << "\nSize of Vector4 = " << vector4.size() << " Capacity of Vector4 = " << vector4.capacity() << std::endl;
```
 - When Using **``V.assign(3 , 10)``** function you set the the vector with value of 10 , 3 times. the size is always as same as the number of elements inside the vector **,BUT** the capacity differ from method to another
 - When setting with method **``V.assign(3 , 10)``** The capacity is set to **3** and when you push any element it will be doubled to be **6** , and it will still **6** when you push **5th** and **6th** elements, but when adding the **7th** it will be doubled to be **12** and so on
 - The same exactly of **``V.assign(20 , 0)``** is to **``std::vector<int> vector4 = std::vector<int>(20)``**
 - When setting by function **``V.push_back(10)``** or doing **for-loop** to set the elements with that function , it take a different way in capacity, It will be **1,2,4,8,16,32,......** and so on so when you assign **2** eleements it will be capacity of two, when you assign the **3rd** it will be **4** , when you assign the **4th** and **5th** elements the capacity will be **8** and so on.
---
### Single Responsibilty
- **Good class is responsible on one concern**
- Must be One reason to change the class , **EX**: *an email service class with retrial (resend on fail) + logging  + caching ----> this is **Bad-Designed** Class*

---
### Prevent Copy Constructor and Assignment operator
- Purpose to catch the code that calls them and you don't notice
- But You may support them later if needed
- you can move the copy constructor to private.
- in C++11 it's easer 
```cpp
User (const User&) = delete; //class called User and this is way to create copy constructor
void operator = (const User&) = delete;
```
### Access in Parent Class Example
- If we have a parent class Code like
```cpp
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
}
```
- We created a child from that class
```cpp
class Student : public Person
{
private:
    double GPA;

public:
    Student() 
    {
        std::cout << "Default Constructorn of Student Class" << std::endl;
        GPA = 0;
        name = "Hani";
    }
    Student(double gpa) : Person("Ali"), GPA(gpa)
    {
        std::cout << "Second Constructor of Student Class" << std::endl;
    }
}
```
- If we want to set the name which is protected in Parent Class we should to call a constructor of the parent with the way in second Constructor in Child here
- we can't access the name in parent class with list initializer in the child constructor because it hasn't been created yet
- SO if we wanted to access name from parent class we can set it inisde the constructor of child class not to use list initializer










---
### Recommended to Watch
[OOP Summary | Dr. Mostafa Saad](https://youtu.be/VtBhBUz9nlw?si=boKjJ7JeAH8yXt-Q)










