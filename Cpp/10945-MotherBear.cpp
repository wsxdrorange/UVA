#include <iostream>

using namespace std;
int main() {
    string ln;
    while (getline(cin,ln) && (ln.compare("DONE") != 0))
    {
        string temp;
        for (int i =0 ; i < ln.length(); i++)
        {
            if (isalpha(ln.at(i)))
            {
                temp.push_back(tolower(ln.at(i)));
            }
        }
        string backwards;
        for (int i = temp.length()-1; i >= 0; i--)
        {
            backwards.push_back(temp.at(i));
        }
        if (temp.compare(backwards) == 0)
        {
            cout << "You won't be eaten!" << endl;
        }
        else
        {
            cout << "Uh oh.." << endl;
        }
    }
}
