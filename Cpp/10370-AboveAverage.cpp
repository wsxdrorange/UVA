#include <iostream>

using namespace std;

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int nums;
        cin >> nums;
        int grades [nums];
        int average = 0;
        for (int i = 0; i < nums; i++)
        {
            cin >> grades[i];
            average += grades[i];
        }
        average /= nums;
        int aboveAverage = 0;
        for (int i = 0; i < nums; i++)
        {
            if (grades[i] > average)
            {
                aboveAverage++;
            }
        }
        printf("%.3f%%\n",((double)aboveAverage/nums)*100);
    }
}
