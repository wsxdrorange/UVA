#include<iostream>
using namespace std;

int main ()
{
    string s;
    while (cin >> s)
    {
        string t;
        cin >> t;
        bool subsequence = true;
        int ind = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = ind; j < t.length(); j++)
            {
                if (s.at(i) == t.at(j))
                {
                    ind = j+1;
                    break;
                }
                if (j == t.length()-1 && s.at(i) != t.at(j))
                {
                    subsequence = false;
                }
            }
        }
        if (subsequence)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
