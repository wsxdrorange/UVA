#include <iostream>

using namespace std;

int main()
{
    long rev, n, digit;
    int counter = 0;
    int numbers;
    cin >> numbers;
    for (int i = 0; i < numbers; i++)
    {
        long number;
        cin >> number;
        counter = 0;
        while(true)
        {
            rev = 0;
            n = number;
            while (number > 0)
                {
                    digit = number%10;
                    rev = rev*10 + digit;
                    number = number/10;
                }
                if (n == rev)
                {
                    cout << counter << " " << n<<endl;
                    break;
                }
                else
                {
                number = rev + n;
                counter++;
            }
        }

    }
    return 0;
}
