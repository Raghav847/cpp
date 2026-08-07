#include <iostream>
#include <memory>

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    int area()
    {
        return length * breadth;
    }
};

//unique pointer
int main()
{
    std::unique_ptr<Rectangle> P1 = std::make_unique<Rectangle>(10,5);
    std::cout<< P1->area() << std::endl;

    std::unique_ptr<Rectangle> P2;
    P2 = std::move(P1); //transfer

    std::cout << P2->area();
    return 0;
}