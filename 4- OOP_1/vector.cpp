#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> g1;

    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }
    /*===================================Iterators===================================*/
    std::cout << "Output of begin and end" << std::endl;
    for (auto i = g1.begin(); i != g1.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\nOutput of cbegin and end" << std::endl;
    for (auto i = g1.cbegin(); i != g1.cend(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\nOutput of rbegin and end" << std::endl;
    for (auto i = g1.rbegin(); i != g1.rend(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\nOutput of crbegin and end" << std::endl;
    for (auto i = g1.crbegin(); i != g1.crend(); i++)
    {
        std::cout << *i << " ";
    }

    std::cout << "\n=====================================" << std::endl;
    /*==============================Capacity==============================*/
    std::cout << "Size of g1 = " << g1.size() << std::endl;
    std::cout << "capacity of g1 = " << g1.capacity() << std::endl;
    // resizing g1
    g1.resize(3);
    for (auto i = g1.begin(); i < g1.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\nCapacity of g1 =" << g1.capacity() << std::endl;
    g1.reserve(8);
    std::cout << "\nCapacity After g1.reserve(8) =" << g1.capacity() << std::endl;
    for (auto i = g1.begin(); i < g1.end(); i++)
    {
        std::cout << *i << " ";
    }
    g1.shrink_to_fit();
    std::cout << "\nCapaicty after shrinkage =" << g1.capacity() << std::endl;

    g1.push_back(4);
    g1.push_back(5);

    std::cout << "=====================================" << std::endl;
    /*==============================Element access==============================*/
    /*g1.begin is the first element not 0, we consider that is for loop and starts from 1
    and g1.end() is past of the last one*/
    for (auto i = g1.begin(); i < g1.end(); i++)
    {
        std::cout << *i << " ";
    }

    std::cout << "\nElement 2 = " << g1[1] << std::endl;
    std::cout << "Element 3 = " << g1.at(2) << std::endl;
    std::cout << "Firtst element = " << g1.front() << std::endl;
    std::cout << "Last element = " << g1.back() << std::endl;

    int *pos = g1.data();
    std::cout << "First element in first location = " << *pos << std::endl;
    std::cout << "================================" << std::endl;
    /*=======================================Modifiers=======================================*/
    std::vector<int> v;

    // fill the vector with 10 five times
    std::cout << "Filling Vector with 10 5 times" << std::endl;
    v.assign(5, 10);
    std::cout << "Elements of the vector:" << std::endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\nSize = " << v.size() << std::endl;

    // inserts 15 to the last position so the element become 6 elements
    std::cout << "inserts 15 to the last position so the element become 6 elements" << std::endl;
    v.push_back(15);
    int n = v.size();
    std::cout << "Last element in the vector = " << v[n - 1] << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;

    // removes last element, the element is removed from vector but still in its location
    std::cout << "removes last element, the element is removed from vector but still in its location" << std::endl;
    v.pop_back();
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;

    // inserts 5 at the beginning
    std::cout << "inserts 5 at the beginning" << std::endl;
    v.insert(v.begin(), 5);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;

    // removes the first element
    std::cout << "removes the first element" << std::endl;
    v.erase(v.begin());
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;

    // inserts 5 at the beginning
    std::cout << "inserts at the beginning" << std::endl;
    v.emplace(v.begin(), 5);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;

    // Inserts 20 at the end
    std::cout << "Inserts 20 at the end" << std::endl;
    v.emplace_back(20);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;

    /*erase last element end() refersed to the element past
    the last element not the last element itself*/
    std::cout << "erase last element" << std::endl;
    v.erase(v.end() - 1);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;
    std::cout << "Capacity of v =" << v.capacity() << std::endl;

    // Clear the vector
    v.clear();
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector = " << v.size() << std::endl;
    std::cout << "Capacity of v =" << v.capacity() << std::endl;
    std::cout << "================================" << std::endl;

    std::vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    std::cout << "Elements of v1" << std::endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector1 = " << v1.size() << std::endl;

    std::cout << "Elements of v2" << std::endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector2 = " << v2.size() << std::endl;

    v1.swap(v2);
    std::cout << "After Swapping" << std::endl;
    std::cout << "Elements of v1" << std::endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector1 = " << v1.size() << std::endl;

    std::cout << "Elements of v2" << std::endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of the vector2 = " << v2.size() << std::endl;

    std::cout << "=============================" << std::endl;
    std::vector<int> v3;
    v3.assign(3, 10);
    std::cout << "size of v3 = " << v3.size() << std::endl;
    std::cout << "Capacity of v3 = " << v3.capacity() << std::endl;

    v3.insert(v3.end(), 5);
    std::cout << "size of v3 = " << v3.size() << std::endl;
    std::cout << "Capacity of v3 = " << v3.capacity() << std::endl;

    v3.insert(v3.end(), 6);
    std::cout << "size of v3 = " << v3.size() << std::endl;
    std::cout << "Capacity of v3 = " << v3.capacity() << std::endl;

    v3.erase(v3.end() - 1);
    std::cout << "size of v3 = " << v3.size() << std::endl;
    std::cout << "Capacity of v3 = " << v3.capacity() << std::endl;

    v3.erase(v3.end() - 1);
    std::cout << "size of v3 = " << v3.size() << std::endl;
    std::cout << "Capacity of v3 = " << v3.capacity() << std::endl;

    v3.erase(v3.end() - 1);
    std::cout << "size of v3 = " << v3.size() << std::endl;
    std::cout << "Capacity of v3 = " << v3.capacity() << std::endl;

    std::cout << "================================" << std::endl;
    std::cout << "Test to see difference between v.assign and v.push_back" << std::endl;

    std::vector<int> vector1, vector2, vector3;

    vector1.push_back(1);
    vector1.push_back(1);
    vector1.push_back(1);
    vector1.push_back(1);
    vector1.push_back(1);

    vector2.assign(3, 1);
    vector2.push_back(1);
    vector2.push_back(1);
    vector2.push_back(1);

    for (int i = 0; i < 3; i++)
    {
        vector3.push_back(1);
    }

    std::cout << "Size of Vector1 = " << vector1.size() << " Capacity of Vector1 = " << vector1.capacity() << std::endl;
    std::cout << "Size of Vector2 = " << vector2.size() << " Capacity of Vector2 = " << vector2.capacity() << std::endl;
    std::cout << "Size of Vector3 = " << vector3.size() << " Capacity of Vector3 = " << vector3.capacity() << std::endl;

    std::cout << "==========================================" << std::endl;
    std::cout << "Assigning Vector 4 with vector <int> (20)" << std::endl;
    std::vector<int> vector4 = std::vector<int>(20);
    for (auto i = vector4.begin(); i < vector4.end(); i++)
    {
        std::cout << *i << " ";
    }
    vector4.push_back(1);
    std::cout << "\nSize of Vector4 = " << vector4.size() << " Capacity of Vector4 = " << vector4.capacity() << std::endl;

    return 0;
}
