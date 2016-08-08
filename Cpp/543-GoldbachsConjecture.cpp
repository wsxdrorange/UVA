#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    
    bool prime[1000000+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000001; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=1000001; i += p)
                prime[i] = false;
        }
    }
    int n;
    while (cin >> n && (n != 0))
    {
        int min = 2;
        int max = n;
        int big = 0;
        int small = 0;
        for (int i = min; i < 1000001; i++)
        {
            if (prime[i])
            {
                if (i > (max/2))
                {
                    break;
                }
                int j = max-i;
                if (prime[j])
                {
                    if (i + j == n)
                    {
                        big = j;
                        small = i;
                        break;
                    }
                }
            }
        }
        if (big == 0 & small == 0)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
        else
        {
            cout << n << " = " << small << " + " << big << endl;
        }
    }
}
