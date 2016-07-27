import java.math.BigInteger;
import java.util.Scanner;
public class FibbonaciFreeze {
	public static void main (String args []) throws Exception
	{
		BigInteger fib [] = new BigInteger [5001];
		fib[0] = new BigInteger("0");
		fib[1] = new BigInteger("1");
		fib[2] = new BigInteger("1");
		for (int i = 3; i < 5001; i++)
		{
			fib[i] = fib[i-1].add(fib[i-2]);
		}
		Scanner in = new Scanner(System.in);
		while (in.hasNextInt())
		{
			int n = in.nextInt();
			System.out.println("The Fibonacci number for " + n + " is " + fib[n]);
		}
	}
}
