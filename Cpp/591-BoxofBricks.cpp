#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int count = 1;
   int times;
   while (cin >> times && (times != 0))
   {
       int boxes [times];
       int avg = 0;
       for (int i = 0; i < times; i++)
       {
           cin >> boxes[i];
           avg += boxes[i];
       }
       avg /= times;
       int sum = 0;
       for (int i = 0; i < times; i++)
       {
           if (boxes[i] > avg)
           {
               sum += boxes[i] - avg;
           }
       }
       cout << "Set #" << count << endl;
       cout << "The minimum number of moves is " << sum << "." << endl <<"\n";
       count++;
   }
   int times;
   cin >> times;
   for (int i = 1; i <= times; i++)
   {
       int a;
       int b;
       int c;
       cin >> a;
       cin >> b;
       cin >> c;
       cout << "Case " << i << ": " << max(min(a,b), min(max(a,b),c))<<endl;
   }
   int a;
   double b;
   while (cin >> a >> b)
   {
       printf("%.0f\n",pow(b,(1.0/a)));
   }
}
