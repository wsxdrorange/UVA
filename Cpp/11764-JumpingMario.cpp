#include<algorithm>
#include<iostream>
using namespace std;

int main ()
{
    int times;
    cin >> times;
    for (int i = 1; i <= times; i++){
        int num;
        cin >> num;
        if (num != 1){
            int arr[num];
            int highJump = 0;
            int lowJump = 0;
            cin >> arr[0];
            for (int j =1; j < num; j++){
                cin >> arr[j];
                if (arr[j] > arr[j-1]){
                    highJump++;
                }
                else if (arr[j] < arr[j-1]){
                    lowJump++;
                }
            }
            cout << "Case " << i << ": " << highJump << " " << lowJump << endl;
        }
        else{
            cout <<  "Case " << i << ": 0 0" << endl;
            cin >> num;
        }
    }
}
