#include <iostream>

int main(int argc, char const *argv[])
{
    auto var1{13};
    auto var2{13.1};
    auto var3{13.1f};
    auto var4{13.1L};
    auto var5{13u};
    auto var6{13ul};
    auto var7{13ll};

    std::cout << " Size of Var_1 = " << sizeof(var1) << std::endl;
    std::cout << " Size of Var_2 = " << sizeof(var2) << std::endl;
    std::cout << " Size of Var_3 = " << sizeof(var3) << std::endl;
    std::cout << " Size of Var_4 = " << sizeof(var4) << std::endl;
    std::cout << " Size of Var_5 = " << sizeof(var5) << std::endl;
    std::cout << " Size of Var_6 = " << sizeof(var6) << std::endl;
    std::cout << " Size of Var_7 = " << sizeof(var7) << std::endl;


    return 0;
}
