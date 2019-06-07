#include <iostream>

/*
    program simulates a microwave
*/

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

    // ** Edit these Parameters to control the Microwave
    wave.reset();

    cout << "Enter Power Level (1 or 2): ";
    int powerLevel;
    cin >> powerLevel;
    if(cin.fail())
    {
        cout << "Entered Invalid Input, try again" << endl;
        return 1;
    }
    else if(powerLevel > 0 && powerLevel < 3)
    {
        if(powerLevel == 2) 
        {
            wave.switch_power_level();
        }
    }
    else
    {
        cout << "Out of range.. input should be a 1 or 2" << endl;
        return 1;
    }
    


    cout << "How many times would you like to add 30 seconds? ";
    int numTimes;
    cin >> numTimes;
    if(cin.fail())
    {
        cout << "Must be an integer" << endl;
        return 1;
    }

    for(int i = 0; i <= numTimes; i++) 
    {
        wave.increase_time();
    }

    wave.start();

    return 0;
}