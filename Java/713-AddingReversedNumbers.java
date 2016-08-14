import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		int times = in.nextInt();
		for (int i =0; i < times; i++){
			BigInteger bi1 = new BigInteger(reverse(in.next()));
			bi1 = bi1.add(new BigInteger(reverse(in.next())));
			String finalAnswer = reverse(bi1.toString());
			for (int j = 0; j < finalAnswer.length(); j++){
				if (finalAnswer.charAt(j) != '0'){
					finalAnswer = finalAnswer.substring(j);
					break;
				}
			}
			System.out.println(finalAnswer);
		}
	}
	public static String reverse(String s){
		String temp = "";
		for (int j = s.length()-1; j >= 0; j--){
			temp += s.charAt(j);
		}
		return temp;
	}
}
