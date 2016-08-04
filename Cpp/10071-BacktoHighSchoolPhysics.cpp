#include <iostream>

using namespace std;

int main()
{
    int v;
    int t;
    while (cin >> v >> t)
    {
        if ((v >= -100 && v <= 100) && (t <= 200 && t >= 0))
        {
            cout << v*2*t<<endl;
        }
    }
    return 0;
}
