#include <iostream>

using namespace std;

int main() {
    int switcher = 1;
    string ln;
    while (getline(cin, ln))
    {
        string temp;
        for (int i = 0; i < ln.length(); i++)
        {
            if (ln.at(i) == '"')
            {
                if (switcher == 1)
                {
                    temp.append("``");
                    switcher = 2;
                }
                else
                {
                    temp.append("''");
                    switcher = 1;
                }
            }
            else
            {
                temp.push_back(ln.at(i));
            }
        }
        cout << temp << endl;
    }
}
