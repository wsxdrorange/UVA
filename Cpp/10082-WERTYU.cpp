#include <iostream>

using namespace std;

int main() {
    char input [] = {'1','2','3','4','5','6','7','8','9','0','-','=','W','E','R','T','Y','U','I','O','P','[',']','\\','S','D','F','G','H','J','K','L',';','\'','X','C','V','B','N','M',',','.','/'};
    char output [] = {'`','1','2','3','4','5','6','7','8','9','0','-','Q','W','E','R','T','Y','U','I','O','P','[',']','A','S','D','F','G','H','J','K','L',';','Z','X','C','V','B','N','M',',','.'};
    string ln;
    while (getline(cin,ln))
    {
        string temp;
        for (int i = 0; i < ln.length(); i++)
        {
            for (int j = 0; j < sizeof(input); j++)
            {
                if (ln.at(i) == ' ')
                {
                    temp.push_back(' ');
                    break;
                }
                else if (ln.at(i) == input[j]) {
                    temp.push_back(output[j]);
                    break;
                }
            }
        }
        cout << temp << endl;
    }
}
