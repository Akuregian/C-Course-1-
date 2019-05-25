#include <iostream>


using namespace std;

class Microwave
{
    public:
        Microwave();
        void increase_time();
        void switch_power_level();
        void reset();
        void start();

    private:
        int time;
        int power_level = 1;
};

Microwave::Microwave()
{
    time = 0;
    power_level = 1;
}

void Microwave::increase_time()
{
    time += 30;
}

void Microwave::switch_power_level()
{
    if(power_level == 1)
    {
        power_level = 2;
        return;
    }
    if(power_level == 2)
    {  
        power_level = 1;
        return;
    }
}

void Microwave::reset()
{
    time = 0;
    power_level = 1;
}

void Microwave::start()
{
    cout << "Cooking for " << time << " " << "Seconds at level " << power_level << endl;
}


int main()
{
    Microwave wave;
    wave.reset();
    wave.increase_time();
    wave.increase_time();
    wave.switch_power_level();
    wave.start();

    return 0;
}