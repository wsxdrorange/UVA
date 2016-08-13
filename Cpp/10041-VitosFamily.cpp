#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main ()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int relatives;
        cin >> relatives;
        int streets[relatives];
        for (int j = 0; j < relatives; j++){
            cin >> streets[j];
        }
        double median = 0;
        sort(streets,streets+relatives);
        if (relatives%2 == 0){
            median = (streets[relatives/2] + streets[relatives/2-1])/2;
        }
        else{
            median = streets[(relatives-1)/2];
        }
        long long sum = 0;
        for (int j = 0; j < relatives; j++){
            if (streets[j] != median){
                sum += fabs(median - streets[j]);
            }
        }
        cout << sum << endl;
    }
}
