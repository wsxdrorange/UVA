
#include<iostream>
#include <map>
#include <vector>
using namespace std;
int main ()
{
    int lines;
    cin >> lines;
    map <char,int> letterFreq;
    string ln;
    getline(cin,ln);
    for (int i = 0; i < lines; i++){
        getline(cin,ln);
        for (int j = 0; j < ln.length(); j++){
            if (isalpha(ln.at(j))){
                char temp = toupper(ln.at(j));
                letterFreq[temp]++;
            }
        }
    }
    int max = 0;
    int maxIndex = 0;
    vector<pair<char,int>> v;
    for (auto const& x: letterFreq){
        v.push_back(pair<char,int>(x.first,x.second));
    }
    while(!v.empty()){
        max = 0;
        maxIndex = 0;
        for (int i = 0; i < v.size(); i++){
            if (v.at(i).second > max){
                max = v.at(i).second;
                maxIndex = i;
            }
            else if (v.at(i).second == max){
                if (v.at(i).first < v.at(maxIndex).first){
                    max = v.at(i).second;
                    maxIndex = i;
                }
            }
        }
        cout << v.at(maxIndex).first<< " "  << v.at(maxIndex).second << endl;
        v.erase(v.begin() + (maxIndex));
    }
}
