#include <iostream>

using namespace std;

int main() {
    int times;
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        int start, finish;
        int sum = 0;
        cin >> start;
        cin >> finish;
        for (int j = start; j <= finish; j++)
        {
            if (j%2 != 0)
            {
                sum += j;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }
}
