import java.util.*;
import java.lang.String;
public class MachinedSurfaces
{
	public static void main (String args [])
	{
		Scanner kb = new Scanner(System.in);
		while(true)
		{
			int j = kb.nextInt();
			int n = 100;
			int count = 0;
			int total = 0;
			String s;
			String coms [] = new String [j];
			for (int i = 0; i < j; i++)
			{
				 s = kb.nextLine();
				 coms[i] = s;
				for (int k = 0; k < 25; k++)
				{
					if (s.charAt(k) == 'B')
					{
						count++;
					}
				}
				if (count < n)
				{
					n = count;
				}
				count = 0;
			}
			for (int i = 0; i < j; i++)
			{
				for (int k = 0; k < 25; k++)
				{
					if (coms[i].charAt(k) == 'X')
					{
						count++;
					}
				}
				total += 25 - (count + n);
				count = 0;
			}
			System.out.println(total);
		}
	}
}
