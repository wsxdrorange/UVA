#include<iostream>
#include <math.h>
using namespace std;

int main ()
{
    long double cuts;
    while (cin >> cuts && cuts >= 0)
    {
        long double x = (powl(cuts,2.0) + cuts + 2)/2;
        printf("%.0Lf\n",x);
    }
}
