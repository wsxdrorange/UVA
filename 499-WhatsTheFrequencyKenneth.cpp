#include <iostream>
#include <map>
using namespace std;

int main() {
    string ln;
    while(getline(cin, ln))
    {
        map <char,int> letters;
        for (int i = 0; i < ln.length(); i++)
        {
            if (isalpha(ln.at(i)))
            {
                letters[ln.at(i)]++;
            }
        }
        int max = 0;
        typedef map<char,int>::iterator it_type;
        for (it_type it = letters.begin(); it != letters.end(); it++)
        {
            if (it->second > max)
            {
                max = it->second;
            }
        }
        for (it_type it = letters.begin(); it != letters.end(); it++)
        {
            if (it->second == max)
            {
                cout << it->first;
            }
        }
        if (max != 0)
        {
            cout << " " << max <<endl;
        }
    }
}
