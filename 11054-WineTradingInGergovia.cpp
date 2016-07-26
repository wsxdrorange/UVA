#include <iostream>
using namespace std;
int main() {
    int times;
    while(cin >> times && (times != 0))
    {
        int arr[times];
        long long ans = 0;
        for (int i = 0; i < times; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < times-1; i++)
        {
            ans += abs(arr[i]);
            arr[i+1]  += arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
