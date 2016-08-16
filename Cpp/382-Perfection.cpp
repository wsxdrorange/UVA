
#include<iostream>
#include <vector>
using namespace std;
vector <int> v;
void findFactors(int num){
    for (int i = 1; i < num; ++i){
        if (num % i == 0)
            v.push_back(i);
    }
}
int main ()
{
    int n;
    cout << "PERFECTION OUTPUT" << endl;
    while (cin >> n && n != 0){
        v.clear();
        findFactors(n);
        int sum = 0;
        for (int i: v){
            sum += i;
        }
        if (sum > n){
            printf("%5d%2s%s\n",n,"","ABUNDANT");
        }
        else if (sum < n){
            printf("%5d%2s%s\n",n,"","DEFICIENT");
        }
        else{
            printf("%5d%2s%s\n",n,"","PERFECT");
        }
    }
    cout << "END OF OUTPUT" <<endl;
}
