#include <iostream>

class Entity
{
public:
    Entity()
    {
        std::cout<<"Created Entity"<<std::endl;
    }

    ~Entity()
    {
        std::cout<<"Destroyed Entity"<<std::endl;
    }
};

//scoped pointer
class ScopedPtr
{
private:
    Entity* m_ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_ptr(ptr)
        {

        }
    ~ScopedPtr()
    {
        delete m_ptr;
    }
};

int main()
{
    {
        ScopedPtr e = new Entity();
    }
    return 0;
}
