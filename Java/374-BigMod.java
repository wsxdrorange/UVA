import java.math.BigInteger;
import java.util.Scanner;
public class UVATemp {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext()){
			BigInteger bi1 = new BigInteger(in.next());
			System.out.println(bi1.modPow(new BigInteger(in.next()), new BigInteger(in.next())));
		}
		
	}
}
