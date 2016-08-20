import java.math.BigInteger;
import java.util.Scanner;
public class UVATemp {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext()){
			int n  = in.nextInt();
			int m = in.nextInt();
			if (n == 0 && m == 0){
				break;
			}
			BigInteger numerator = new BigInteger(factorial(n));
			BigInteger denom = new BigInteger(factorial(n-m));
			denom = denom.multiply(new BigInteger(factorial(m)));
			System.out.println(n + " things taken " + m + " at a time is " + numerator.divide(denom).toString() + " exactly.");
		}
	}
	public static String factorial(int n) {
	       BigInteger fact = new BigInteger("1");
	       for (int i = 1; i <= n; i++) {
	           fact = fact.multiply(new BigInteger(i + ""));
	       }
	       return fact.toString();
	   }
}
