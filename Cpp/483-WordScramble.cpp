#include <iostream>
#include <vector>
using namespace std;

string reverse(string s)
{
    string t;
    for (int i = s.length()-1; i  >= 0; i--)
    {
        t.push_back(s.at(i));
    }
    return t;
}
int main() {
    string ln;
    while (getline(cin,ln))
    {
        vector <string> v;
        while(ln.find(" ") != ln.npos)
        {
            v.push_back(ln.substr(0,ln.find(" ")));
            ln = ln.substr(ln.find(" ")+1);
        }
        v.push_back(ln);
        string output;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != v.size()-1)
            {
                output.append(reverse(v.at(i)) + " ");
            }
            else
            {
                output.append(reverse(v.at(i)));
            }
        }
        cout << output << endl;
    }
}
