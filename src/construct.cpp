#include <iostream>

class Entity
{
    public:
        int X, Y;

        Entity(int x, int y)
        {
            X = x;
            Y = y;
        }

        void Print()
        {
            std::cout << X << "," << Y << '\n';
        }
};

int main()
{
    Entity e(5, 7);
    e.Print();

    return 0;
}
