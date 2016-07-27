
#include <iostream>

using namespace std;

int main() {
    int n;
    int q;
    int times = 1;
    while (true)
    {
        cin >> n;
        cin >> q;
        if (n == 0 && q == 0)
        {
            break;
        }
        int marbles[n];
        for (int i = 0; i < n; i++)
        {
            cin >> marbles[i];
        }
        int queries[q];
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }
        int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j< n-1; j++)
            {
                if (marbles[j] > marbles[j+1])
                {
                    temp = marbles[j];
                    marbles[j] = marbles[j+1];
                    marbles[j+1] = temp;
                }
            }
        }
        int index = -1;
        cout << "CASE# " << times << ":"<<endl;
        for (int i = 0; i < q;i++)
        {
            index = -1;
            for (int j = 0; j < n; j++)
            {
                if (queries[i] == marbles[j])
                {
                    index = j+1;
                    break;
                }
            }
            if (index == -1)
            {
                cout << queries[i] << " not found" <<endl;
            }
            else
            {
                cout << queries[i] << " found at " << index << endl;
            }
        }
        times++;
    }
}
