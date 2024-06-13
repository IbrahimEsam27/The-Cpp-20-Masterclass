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
 - **Using Braced Initialization {} you should put the number in float form with . if it's greater than 7 digits **
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

