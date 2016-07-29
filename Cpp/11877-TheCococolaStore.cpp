#include <iostream>

using namespace std;
int main() {
    int emptyBottles;
    while (cin >> emptyBottles && (emptyBottles != 0))
    {
        int fullBottles = 0;
        while (emptyBottles >= 3)
        {
            int tempBottles = emptyBottles/3;
            fullBottles += tempBottles;
            emptyBottles %= tempBottles*3;
            emptyBottles += tempBottles;
        }
        if(emptyBottles == 2)
        {
            fullBottles ++;
        }
        cout << fullBottles <<endl;
    }
}
