#include <iostream>
#include <vector>

int main()
{
    std::vector<char> v = {'l', 'f', 'g'};
    v.push_back('z');
    v.insert(v.begin() + 1, 'c');


    return 0;
}