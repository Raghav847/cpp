#include <iostream>
using namespace std;

class Shape
{
    public:
        //virtual func
        virtual void calculate()
        {
            cout << "Area of the Shape ";
        }

        virtual ~Shape()
        {
            cout << "Shape Destructor called\n";
        }
};

class Rectangle : public Shape
{
    public:
        int width, height, area;

        void calculate() override
        {
            width = 5;
            height = 10;

            area = width * height;
            cout << "Area of Rectangle: " << area << "\n";
        }

        ~Rectangle()
        {
            cout << "Rectangle Destructor called\n";
        }
};

class Square : public Shape
{
    public:
        int side, area;

        void calculate() override
        {
            side = 7;
            area = side * side;
            cout << "Area of Sqare: " << area << "\n";
        }

        ~Square()
        {
            cout << "Square Destructor called\n";
        }
};

int main()
{
    Shape *S;

    Rectangle r;
    S = &r;
    S->calculate();

    Square sq;
    S = &sq;
    S->calculate();

    return 0;
}