import java.math.BigInteger;
import java.util.Scanner;
public class UVATemp {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		int times = in.nextInt();
		for (int i =0; i < times; i++){
			String ln = in.next();
			BigInteger bi = new BigInteger(ln);
			bi = bi.multiply(new BigInteger("567"));
			bi = bi.divide(new BigInteger("9"));
			bi = bi.add(new BigInteger("7492"));
			bi = bi.multiply(new BigInteger("235"));
			bi = bi.divide(new BigInteger("47"));
			bi = bi.subtract(new BigInteger("498"));
			System.out.println(bi.toString().charAt(bi.toString().length()-2));
		}
	}
}
