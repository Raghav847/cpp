#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start;

    Timer() : start(std::chrono::steady_clock::now()) {}

    ~Timer() 
    {
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<float, std::milli> duration = end - start;
        std::cout<< "Execution time: " << duration.count() << " ms\n";
    }
};

void slowFunc() 
{
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

int main()
{
    std::cout<< "Starting benchmark...\n";
    {
        Timer timer;
        slowFunc();
    }

    return 0;
}
