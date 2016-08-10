#include<iostream>
#include<math.h>
using namespace std;
bool IsInteger(double num) {
    return ceil(num) == floor(num);
}
int main ()
{
    int times;
    cin >> times;
    while (times > 0)
    {
        double s;
        double d;
        cin >> s >> d;
        double x = 0;
        x = ((s+d)/2);
        long y = s-x;
        if (y < 0 || x < 0 || (!IsInteger(x))){
            cout << "impossible" << endl;
        }
        else{
            cout << fixed;
            printf("%.0f %.0ld\n",x,y);
        }
        times--;
    }
}
