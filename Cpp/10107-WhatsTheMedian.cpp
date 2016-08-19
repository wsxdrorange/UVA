
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    int n;
    vector<int> v;
    int med = 0;
    while (cin >> n){
        v.push_back(n);
        sort(v.begin(),v.end());
        if (v.size()%2 == 0){
            med = (v.at(v.size()/2) + v.at(v.size()/2-1))/2;
        }
        else{
            med = v.at((v.size()-1)/2);
        }
        cout << med << endl;
    }
}
