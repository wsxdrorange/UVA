
#include<iostream>
using namespace std;
int sumdigits(int n){
    int sum = 0;
    while(n > 9){
        sum += n%10;
        n /= 10;
    }
    sum += n;
    return sum;
}
int main ()
{
    int n;
    while (cin >> n && !(n == 0)){
        while (n > 9){
            n = sumdigits(n);
        }
        cout << n << endl;
    }
}
