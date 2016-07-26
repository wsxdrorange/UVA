import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.Scanner;
public class Exponentiation {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		while (in.hasNext())
		{
			double input = in.nextDouble();
			BigDecimal bi1 = new BigDecimal(Double.toString(input));
			int exp = in.nextInt();
			BigDecimal prod = bi1.pow(exp);
			String ans = prod.toPlainString();
			if (ans.charAt(0) == '0')
			{
				ans = ans.substring(1);
			}
			System.out.println(ans);
		}
	}
}
