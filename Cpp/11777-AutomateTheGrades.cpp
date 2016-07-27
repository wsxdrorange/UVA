#include <iostream>

using namespace std;

int main() {
    int times;
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        int sum = 0;
        int n;
        //Terms
        cin >> n;
        sum += n;
        cin >> n;
        sum += n;
        //Final
        cin >> n;
        sum += n;
        //Attendance
        cin >> n;
        sum += n;
        //Class_Tests
        int a;
        int b;
        int c;
        cin >> a;
        cin >> b;
        cin >> c;
        sum += ((max(min(a,b), min(max(a,b),c))) + max(c,max(a,b)))/2;
        if (sum >= 90)
        {
            cout << "Case "<< i<<": A"<<endl;
        }
        else if(sum >= 80)
        {
            cout << "Case "<< i<<": B"<<endl;
        }
        else if (sum >= 70)
        {
            cout << "Case "<< i<<": C"<<endl;
        }
        else if (sum >= 60)
        {
            cout << "Case "<< i<<": D"<<endl;
        }
        else
        {
            cout << "Case "<< i<<": F"<<endl;
        }
    }
}
