#include <iostream>
using namespace std;

int main()
{
    int cases;
    int farmers;
    double farmSize, animals, env;
    long total = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        total = 0;
        if (cases >= 20)
        {
            break;
        }
        cin >> farmers;
        if (farmers >= 20 || farmers < 0)
        {
            break;
        }
        for (int j = 0; j < farmers; j++)
        {
            cin >> farmSize >> animals >> env;
            total += farmSize*env;
        }
        cout << total<<endl;
    }
}
