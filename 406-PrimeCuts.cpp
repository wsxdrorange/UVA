#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[1000] = {0};
    vector <int> v;
    for (int i = 2; i < 1000; i++)
    {
        for (int j = i * i; j < 1000; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (arr[i - 1] == 0)
        {
            v.push_back(i);
        }
    }
    //Sieve
    int max = 0;
    int c  = 0;
    while (cin >> max >> c)
    {
        vector <int> list;
        int index = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if(v.at(i) > max )
            {
                index = i;
                break;
            }
            else
            {
                list.push_back(v.at(i));
            }
        }
        if (c >= list.size())
        {
            cout << max << " " << c <<": ";
            for (int i = 0; i < list.size(); i++)
            {
                if (i == list.size()-1)
                {
                    cout << list.at(i);
                }
                else
                {
                    cout << list.at(i) << " ";
                }
            }
        }
        else
        {
            if(list.size()%2 == 0)
            {
                if (c*2 > list.size())
                {
                    cout << max << " " << c <<": ";
                    for (int i = 0; i < list.size(); i++)
                    {
                        if (i == list.size()-1)
                        {
                            cout << list.at(i);
                        }
                        else
                        {
                            cout << list.at(i) << " ";
                        }
                    }
                }
                else
                {
                    cout << max << " " << c <<": ";
                    for (int i = (list.size())/2-c; i < list.size()/2+c; i++)
                    {
                        if (i == (list.size()/2+c)-1)
                        {
                            cout << v.at(i);
                        }
                        else
                        {
                            cout << v.at(i) << " ";
                        }
                    }
                }
            }
            else
            {

                int n = c*2-1;
                if (n > list.size())
                {
                    cout << max << " " << c <<": ";
                    for (int i = 0; i < list.size(); i++)
                    {
                        if (i == list.size()-1)
                        {
                            cout << list.at(i);
                        }
                        else
                        {
                            cout << list.at(i) << " ";
                        }
                    }
                }
                else
                {
                    cout << max << " " << c <<": ";
                    for (int i = (list.size()-1)/2-((n-1)/2); i <= (list.size()-1)/2+((n-1)/2); i++)
                    {
                        if (i == ((list.size()-1)/2+((n-1)/2)))
                        {
                            cout << v.at(i);
                        }
                        else
                        {
                            cout << v.at(i) << " ";
                        }
                    }
                }
            }
        }
        cout << "\n" << endl;
    }
}
