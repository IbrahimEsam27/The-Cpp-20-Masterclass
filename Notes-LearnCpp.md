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





