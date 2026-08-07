#include <iostream>
#include <memory>

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    int area() { return length * breadth; }
};

//shared pointer
int main()
{
    std::shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    std::shared_ptr<Rectangle> P2 = P1;

    std::cout << P1->area() << std::endl;
    std::cout<< P2->area() << std::endl;
    std::cout << P1.use_count();
    return 0;
}