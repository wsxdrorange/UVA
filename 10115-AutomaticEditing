#include <iostream>
#include <string>
using namespace std;

int main() {
    string ln;
    int ind = 1;
    while(ind <= 2)
    {
        int pairs;
        cin >> pairs;
        string arr [pairs][2];
        for (int i = 0; i < pairs; i++)
        {
            getline(cin,arr[i][0]);
            getline(cin,arr[i][1]);
        }
        string in;
        getline(cin,in);
        string newWord;
        for (int i = 0; i < pairs; i++)
        {
            int len = arr[i][1].length();
            for (int j = 0; j < in.length(); j++)
            {
                if (j < arr[i][0].length()-len)
                {
                    string temp = in.substr(j,len);
                    if (temp.compare(arr[i][0]) == 0)
                    {
                        newWord.append(temp);
                    }
                    else
                    {
                        newWord.push_back(in.at(j));
                    }
                }
                else
                {
                    newWord.push_back(in.at(j));
                }
            }
        }
        cout << newWord <<endl;
        ind++;
    }
}
