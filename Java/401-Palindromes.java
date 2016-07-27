import java.util.HashMap;
import java.util.Scanner;

public class Palindromes {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		String s ="";
		HashMap<Character,Character> mirrors = new HashMap<>();
		mirrors.put('A', 'A');
		mirrors.put('E', '3');
		mirrors.put('3', 'E');
		mirrors.put('H', 'H');
		mirrors.put('I', 'I');
		mirrors.put('J', 'L');
		mirrors.put('L', 'J');
		mirrors.put('M', 'M');
		mirrors.put('O', 'O');
		mirrors.put('S', '2');
		mirrors.put('2', 'S');
		mirrors.put('T', 'T');
		mirrors.put('U', 'U');
		mirrors.put('V', 'V');
		mirrors.put('W', 'W');
		mirrors.put('X', 'X');
		mirrors.put('Y', 'Y');
		mirrors.put('Z', '5');
		mirrors.put('5', 'Z');
		mirrors.put('1', '1');
		mirrors.put('8', '8');
		while (in.hasNextLine() && !(s = in.nextLine()).equals(""))
		{
			boolean mirror = true;
			boolean paly = false;
			StringBuilder sb = new StringBuilder(s);
			if (s.equals((sb.reverse().toString())))
			{
				paly = true;
			}
			if (s.length()%2 == 0)
			{
				for (int i = 0; i < (s.length()/2); i++)
				{
					char a = s.charAt(i);
					char l = s.charAt(s.length()-1-i);
					if (mirrors.containsKey(l))
					{
						if (!(mirrors.get(l) == a))
						{
							mirror = false;
						}
					}
					else 
					{
						mirror = false;
					}
				}
			}
			else
			{
				for (int i = 0; i < ((s.length()-1)/2); i++)
				{
					char a = s.charAt(i);
					char l = s.charAt(s.length()-1-i);
					if (mirrors.containsKey(l))
					{
						if (!(mirrors.get(l) == a))
						{
							mirror = false;
						}
					}
					else
					{
						mirror = false;
					}
				}
				char middle = s.charAt((s.length()-1)/2);
				if (mirrors.containsKey(middle))
				{
					char mid = mirrors.get(middle);
					if (mid != middle)
					{
						mirror = false;
					}
				}
				else
				{
					mirror = false;
				}
			}
			if (mirror == false && paly == false)
			{
				System.out.println(s + " -- is not a palindrome.");
				System.out.println();
			}
			else if (mirror == true && paly == false)
			{
				System.out.println(s + " -- is a mirrored string.");
				System.out.println();
			}
			else if (mirror == false && paly == true)
			{
				System.out.println(s + " -- is a regular palindrome.");
				System.out.println();
			}
			else 
			{
				System.out.println(s + " -- is a mirrored palindrome.");
				System.out.println();
			}
		}
	}
}
