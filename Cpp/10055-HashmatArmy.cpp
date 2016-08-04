#include <iostream>

using namespace std;

int main()
{
    long army1;
    long army2;
    while(cin >> army1 >> army2)
    {
        if (army2 > army1)
        {
            cout << army2 - army1 << endl;
        }
        else
        {
            cout << army1  - army2 <<endl;
        }
    }
    return 0;
}
