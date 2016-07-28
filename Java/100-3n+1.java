/**
 * Created by localadmin on 7/27/16.
 */
import java.util.*;
public class UVA100 {
    public static void main (String args [])
    {
        Scanner in = new Scanner(System.in);
        int a;
        int b;
        //Take input into a and b, while input can still be taken
        while (in.hasNextInt())
        {
            a = in.nextInt();
            b = in.nextInt();
            int max = 0;
            //Check whether to go from a -> b or b -> a
            if (b > a)
            {
                //Find the cycle length of every number in the loop, if bigger than max, set to max
                for (int i = a; i <= b; i++)
                {
                    int temp = getMaximumCycleLength(i);
                    if (temp > max)
                    {
                        max = temp;
                    }
                }
            }
            else
            {
                for (int i = b; i <= a; i++)
                {
                    int temp = getMaximumCycleLength(i);
                    if (temp > max)
                    {
                        max = temp;
                    }
                }
            }
            System.out.println(a + " " + b + " " + max);
        }
    }
    public static int getMaximumCycleLength(int t)
    {
        int l = t;
        int count = 0;
        while (l != 1)
        {
            if (l%2 == 0)
            {
                l /= 2;
            }
            else
            {
                l = 3*l + 1;
            }
            count++;
        }
        return count+1;
    }
}
