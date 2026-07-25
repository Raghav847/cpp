#include <iostream>

class Entity
{
    public:
        float X, Y;

        void move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        }
};

class Player:public Entity
{
    public:
        void PrintLocation()
        {
            std::cout<<X<<","<<Y<<std::endl;
        }
};

int main()
{
    Player p1;
    p1.X = 1;
    p1.Y = 1;
    p1.move(5, 6);
    p1.PrintLocation();
}
