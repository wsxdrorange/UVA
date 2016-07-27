/**
 * Created by rzhang on 3/22/16.
 */
import java.util.*;
public class TheCollatzSequence {
    public static void main(String args [])
    {
        Scanner in = new Scanner(System.in);
        long cases = 1;
        long start = in.nextInt();
        long end = in.nextInt();
        long n = start;
        boolean brake = false;
        long terms = 1;
        while (in.hasNextInt())
        {
            if (n == 1)
            {
                brake = true;
            }
            else if ((n&1) == 0)
            {
                n /= 2;
            }
            else
            {
                n = n*3+1;
                if (n > end)
                {
                    brake = true;
                }
            }
            if (brake == true)
            {
                System.out.println("Case " + cases + ": A = " + start + ", limit = " + end + ", number of terms = " + terms);
                start = in.nextInt();
                end = in.nextInt();
                if (start == -1 && end == -1)
                {
                    break;
                }
                n = start;
                cases++;
                brake = false;
                terms = 0;
            }
            terms++;
        }
    }
}
