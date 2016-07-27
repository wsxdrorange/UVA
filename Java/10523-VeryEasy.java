/**
 * Created by localadmin on 7/12/16.
 */
import java.util.*;
import java.math.BigInteger;
public class VeryEasy {
    public static void main (String args [])
    {
        Scanner in = new Scanner(System.in);
        while (in.hasNextInt())
        {
            int n = in.nextInt();
            int a = in.nextInt();
            BigInteger sum = new BigInteger("0");
            for (int i = 1; i <= n; i++)
            {
                BigInteger tempo = new BigInteger(a + "").pow(i);
                BigInteger temp = (new BigInteger(i + "").multiply(tempo));
                sum  = sum.add(temp);
            }
            System.out.println(sum.toString());
        }
    }
}
