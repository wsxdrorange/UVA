
/**
 * Created by Guest on 6/7/16.
 */
import java.util.*;
public class PrimaryArithmetic {
    public static void main(String args [])
    {
        Scanner in = new Scanner(System.in);
        long num1 = 0;
        long num2 = 0;
        int carryOver = 0;
        while (true)
        {
            carryOver = 0;
            int carry = 0;
            num1 = in.nextLong();
            num2 = in.nextLong();
            if (num1 == 0 && num2 == 0)
            {
                break;
            }
            long max = Math.max(num1,num2);
            for (int i = 0; i < Long.toString(max).length(); i++)
            {
                if (num1%10 + num2%10 + carryOver >= 10) {
                    carry++;
                    carryOver = (int)(num1%10 + num2%10 + (long)carryOver)/10;
                }
                else
                {
                    carryOver = 0;
                }
                num1 /= 10;
                num2 /= 10;
            }
            if (carry == 0)
            {
                System.out.println("No carry operation.");
            }
            else if (carry == 1)
            {
                System.out.println("1 carry operation.");
            }
            else
            {
                System.out.println(carry + " carry operations.");
            }
        }
    }
}
