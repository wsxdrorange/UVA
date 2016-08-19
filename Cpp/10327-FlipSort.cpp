
#include<iostream>
using namespace std;

int main ()
{
    int nums;
    int temp;
    while (cin >> nums){
        int swaps = 0;
        int arr[nums];
        for (int i = 0; i < nums; i++){
            cin >> arr[i];
        }
        for (int i = 0; i < nums; i++){
            for (int j = 0; j < nums - 1; j++){
                if (arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swaps++;
                }
            }
        }
        cout << "Minimum exchange operations : " << swaps << endl;
    }
}
