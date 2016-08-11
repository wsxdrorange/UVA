#include<iostream>
using namespace std;
int main ()
{
    int n;
    int k;
    while(cin >> n >> k){
        int butts = n;
        while (butts >= k){
            int tempButts = butts/k;
            n += tempButts;
            butts %= k;
            butts += tempButts;
        }
        cout << n << endl;
    }
}
