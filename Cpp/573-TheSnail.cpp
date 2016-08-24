#include<iostream>
using namespace std;

int main ()
{
    double h, u, d, f;
    while(cin >> h >> u >> d >> f && (h != 0)){
        int day = 1;
        double currentHeight = u;
        f = (f/100)*u;
        u -= f;
        currentHeight -= d;
        bool reached = false;
        bool failed = false;
        while (!reached){
            if (currentHeight < 0) {
                failed = true;
                break;
            }
            else{
                day++;
                currentHeight += u;
                if (currentHeight > h){
                    reached = true;
                    break;
                }
                u -= f;
                if (u <= 0){
                    u = 0;
                }
                currentHeight -= d;
            }
        }
        if (reached){
            cout << "success on day " << day << endl;
        }
        else if (failed){
            cout << "failure on day " << day << endl;
        }
    }
}
