#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    for (int i = 0; i < 128; i++)
    {
        unsigned long long rand_value = rand() % 24364;
        bool bin_value = rand_value % 2;
        cout << bin_value;
    }
    return 0;
}
