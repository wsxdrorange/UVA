#include <iostream>
#include <map>
using namespace std;
int main() {
    string ln;
    getline(cin,ln);
    //Find length of static arr
    if (!ln.empty())
    {
        int count = 0;
        string temp = ln;
        while(temp.find(' ') != ln.npos)
        {
            temp = temp.substr(temp.find(' ') +1);
            count++;
        }
        count++;

        //int array of individual numbers
        long long nums [count];
        for (int i = 0; i < count; i++)
        {
            if (i == count-1)
            {
                nums[i] = stol(ln);
            }
            else
            {
                nums[i] = stol(ln.substr(0,ln.find(' ')));
                ln = ln.substr(ln.find(' ')+1);
            }
        }
        //Find uniques
        map <long long,long long> uniquesFreq;
        map <long long,long long> uniquesOrder;
        long long orderer = 1;
        for (int i =0 ; i < count; i++)
        {
            uniquesFreq[nums[i]]++;
            if(uniquesOrder.find(nums[i]) == uniquesOrder.end())
            {
                uniquesOrder[nums[i]] += orderer;
                orderer++;
            }
        }
        long long counter = 1;
        while (counter != uniquesFreq.size()+1)
        {
            for (auto const &p: uniquesOrder)
            {
                if (p.second == counter)
                {
                    for (auto const &p2: uniquesFreq)
                    {
                        if (p.first == p2.first)
                        {
                            cout << p2.first << " " << p2.second << endl;
                            counter++;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
