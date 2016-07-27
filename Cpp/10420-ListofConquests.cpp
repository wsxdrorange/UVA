#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string,int> m;
    int times;
    cin >> times;
    string country;
    getline(cin,country);
    for (int i = 0; i < times; i++)
    {

        getline(cin, country);
        country = country.substr(0, country.find(" "));
        if (m.count(country) == 0)
        {
            m.insert(pair<string,int>(country,1));
        }
        else
        {
            m.at(country)++;
        }
    }
    map<string,int>::iterator mIterator;
    for (mIterator = m.begin(); mIterator != m.end(); mIterator++)
    {
        cout << mIterator->first<<" "<< mIterator->second << "\n";
    }

}
