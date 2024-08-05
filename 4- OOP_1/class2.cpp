#include <iostream>

class myVector
{
private:
    int *arr;
    int len;

public:
    myVector(int len_, int default_value = 0) : len(len_)
    {
        arr = new int[len];
        for (size_t i = 0; i < len; i++)
        {
            arr[i] = default_value;
        }
    }
    ~myVector()
    {
        delete[] arr;
        arr = nullptr;
    }
    int get(int pos)
    {
        return arr[pos];
    }
};
int main(int argc, char const *argv[])
{
    myVector v(5, 12345);
    std::cout << v.get(4) << std::endl;
    return 0;
}
