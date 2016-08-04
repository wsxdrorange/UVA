#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        while(true)
        {
            double number;
            cin >> number;
            if (number == 0)
            {
                break;
            }
            if (sqrt(number) == floor(sqrt(number)))
            {
                cout << "yes"<<endl;

            }
            else
            {
                cout << "no" <<endl;
            }
        }
}
