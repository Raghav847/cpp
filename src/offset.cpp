#include <iostream>
#include <string>

struct Vector3
{
    float x, y, z;
};


int main()
{
    uintptr_t offset = (uintptr_t)&((Vector3*)nullptr)->x;
    std::cout<<offset<<std::endl;
    return 0;
}