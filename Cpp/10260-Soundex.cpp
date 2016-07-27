#include<iostream>

using namespace std;

int main()
{
    string ln;
    while(cin >> ln) {
        string t = "A";
        for (int i = 0; i < ln.length(); i++) {
            if ((ln.at(i) == 'B' || ln.at(i) == 'P' || ln.at(i) == 'V' || ln.at(i) == 'F') &&
                t.at(t.length() - 1) != '1') {
                t.push_back('1');
            }
            else if ((ln.at(i) == 'C' || ln.at(i) == 'G' || ln.at(i) == 'J' || ln.at(i) == 'K' || ln.at(i) == 'Q' ||
                      ln.at(i) == 'S' || ln.at(i) == 'X' || ln.at(i) == 'Z') && t.at(t.length() - 1) != '2') {
                t.push_back('2');
            }
            else if ((ln.at(i) == 'D' || ln.at(i) == 'T') && t.at(t.length() - 1) != '3') {
                t.push_back('3');
            }
            else if ((ln.at(i) == 'L') && t.at(t.length() - 1) != '4') {
                t.push_back('4');
            }
            else if ((ln.at(i) == 'M' || ln.at(i) == 'N') && t.at(t.length() - 1) != '5') {
                t.push_back('5');
            }
            else if ((ln.at(i) == 'R') && t.at(t.length() - 1) != '6') {
                t.push_back('6');
            }
            else if (ln.at(i) == 'A' || ln.at(i) == 'E' || ln.at(i) == 'I' || ln.at(i) == 'O' || ln.at(i) == 'U' ||
                    ln.at(i) == 'H' || ln.at(i) == 'W' || ln.at(i) == 'Y')
            {
                t.push_back('*');
            }
        }
        t = t.substr(1);
        string m = "";
        for (int i =0; i < t.length(); i++)
        {
            if (t.at(i) != '*')
            {
                m.push_back(t.at(i));
            }
        }
        cout << m << endl;
    }
    return 0;
}
