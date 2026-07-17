#include <iostream>

int main()
{
    char c;
    std::cout << "Character\tASCII Value\n";
    for (c = 'A'; c <= 'Z'; c++)
    {
        std::cout << c << "\t\t\t" << int(c) << std::endl;
    }
    return 0;
}
