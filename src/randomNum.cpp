#include <iostream>
#include <random> //std::mt19937, std::random_device


int main()
{
    std::mt19937 mt{ std::random_device{}() };

    std::uniform_int_distribution<> die6{1, 6};

    for (int count {1}; count <= 40; count++)
    {
        std::cout<<die6(mt)<<'\t';

        if (count % 10 == 0)
            std::cout<<'\n';
    }

    return 0;
}