// For .cbp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerateRandomNumber(int min, int max)
{
    // static used for efficiency,
    // so we only calculate this value once
    static const double fraction = 
        1.0 / (static_cast<double>(RAND_MAX) + 1.0);
}

int main()
{
    // set initial seed value to system clock
    srand(static_cast<unsigned int>(time(0)));

    // loop ten times
    for (int i = 0; i < 10; i++)
    {
        cout << GenerateRandomNumber(0, 100) << " ";
    }
    cout << "\n";

    return 0;
} 