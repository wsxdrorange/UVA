#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int length;
        int counter = 0;
        cin >> length;
        int train[length];
        for (int i = 0; i < length; i++)
        {
            cin >> train[i];

        }
        for (int j = 0; j < length-1; j++)
        {
            for (int i = 0; i < length - 1; i++)
            {
                if (train[i] > train[i+1])
                {
                    int temp = train[i];
                    train[i] = train[i+1];
                    train[i+1] = temp;
                    counter++;
                }
            }
        }
        cout << "Optimal train swapping takes " << counter << " swaps."<<endl;

    }
}
