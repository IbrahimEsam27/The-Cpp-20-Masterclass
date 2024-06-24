#include <iostream>

int main(int argc, char const *argv[])
{
    // std::cout << "We have " << argc << " Parametes in our program" << std::endl;

    // for (size_t i = 0; i < argc; i++)
    // {
    //     std::cout << "Argument [ " << i << " ] : " << argv[i] << std::endl;
    // }
    // std::cout << "Size of size_t = " << sizeof(size_t) << std::endl;

    if (argc != 4)
    {
        std::cout << "Program can be called with three arguments like:" << std::endl;
        std::cout << "a + b" << std::endl;
        std::cout << "You Entered:" << std::endl;
        for (int i{0}; i < argc; i++)
        {
            std::cout << "/" << argv[i];
        }
        std::cout << '\n';
        return 0;
    }

    else
    {
        /*atof is a builtin function from c++ std to convert const char 
        array to float number, atoi to convert it to an integer*/
        double first_number{atof(argv[1])};
        double second_number{atof(argv[3])};
        switch (*(argv[2]))
        {
        case '+':
            std::cout << "Sum of two numbers = " << first_number + second_number << std::endl;
            break;
        case '-':
            std::cout << "Abstraction of two numbers = " << first_number - second_number << std::endl;
            break;
        case '*':
            std::cout << "Mulitiplication of two numbers = " << first_number * second_number << std::endl;
            break;
        case '/':
        {
            if (second_number == 0)
            {
                std::cout << "Can't divide on zero" << std::endl;
                break;
            }
            std::cout << "Sum of two numbers = " << first_number / second_number << std::endl;
            break;
        }
        default:
            break;
        }
    }

    return 0;
}
