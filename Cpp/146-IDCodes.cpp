#include<algorithm>
#include<iostream>
using namespace std;

int main ()
{
    string ln;
    while (cin >> ln && (ln.compare("#") != 0)){
        if(next_permutation(ln.begin(),ln.end())){
            cout << ln << endl;
        }
        else{
            cout << "No Successor" << endl;
        }
    }
}
