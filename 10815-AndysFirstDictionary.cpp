#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void MergeSortA(int low , int high);
void MergeA(int low ,int mid ,int high);
vector<string> words;
void MergeSortA(int low , int high)
{
    int mid = 0;
    if(low < high)
    {
        mid = ((low+high)/2);
        MergeSortA(low , mid);
        MergeSortA(mid+1,high);
        MergeA(low,mid,high);
    }
}
void MergeA(int low ,int mid , int high)
{
    int i = low, j = mid+1 , k = low;
    string Temp[words.size()];

    while(i <= mid && j <= high)
    {
        if(words.at(i) < words.at(j) )
        {
            Temp[k].assign(words.at(i));
            i++;
        }
        else
        {
            Temp[k].assign(words.at(j));
            j++;
        }
        k++;
    }
    if(i > mid )
    {
        for(int h = j ;h <= high ; h++ )
        {
            Temp[k].assign(words.at(h));
            k++;
        }
    }
    else
        for(int h = i; h<= mid ; h++ )
        {
            Temp[k].assign(words.at(h));
            k++;
        }
    for(int i = low; i <= high ; i++)
    {
        words.at(i).assign(Temp[i]);
    }
}
int main() {
    string ln;
    string temp;
    bool found = false;
    while (cin >> ln && !(ln.compare("end") == 0))
    {

        for (unsigned i = 0; i<ln.length(); i++)
        {
            if (isalpha(ln.at(i)))
            {
                temp.push_back(ln.at(i));
            }
        }
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        for (string s: words)
        {
            if (s.compare(temp) == 0)
            {
                found = true;
            }
        }
        if (found == false)
        {
            words.push_back(temp);
        }
        found = false;
        temp.clear();
    }
    MergeSortA(0,words.size()-1);
    for (string s: words)
    {
        cout << s <<endl;
    }
}
