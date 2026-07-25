#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void display() = 0;

        virtual ~Base() = 0;
};

Base::~Base()
{
    cout << "Base destructor called" << endl;
}

class Derived : public Base
{
    public:
        void display() override
        {
            cout << "Derived class display" << endl;
        }

        ~Derived()
        {
            cout << "Derived destructor called" << endl;
        }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display();
    return 0;
}