#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
    string ln;
    while (cin >> ln && (ln.compare("0:00") != 0))
    {
        int h = stoi(ln.substr(0,ln.find(":")));
        int m = stoi(ln.substr(ln.find(":")+1,ln.length()));
        double ans = (.5*(60*h-11*m));
        if (fabs(ans)>180)
        {
            ans = 360-fabs(ans);
        }
        printf("%.3f\n",fabs(ans));
    }
    return 0;
}
