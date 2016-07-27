import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class HangmanJudge {
	public static void main (String args [])
	{
		Scanner in = new Scanner(System.in);
		int n = 0;
		while(in.hasNextInt())
		{
			n = in.nextInt();
			if(n == -1)
			{
				break;
			}
			boolean win = false;
			in.nextLine();
			String s = in.nextLine();
			Set<Character> correct = new HashSet<>();
			for (int i = 0; i < s.length(); i++)
			{
				correct.add(s.charAt(i));
			}
			s = in.nextLine();
			List<Character> guessed = new ArrayList<>();
			for (int i = 0; i < s.length(); i++)
			{
				guessed.add(s.charAt(i));
			}
			guessed = removeDuplicates(guessed);
			//char [] guessed = in.nextLine().toCharArray();
			int [] flag = new int [guessed.size()];
			int count = 0;
			for (int i = 0; i < guessed.size(); i++)
			{
				if (correct.contains(guessed.get(i)))
				{
					correct.remove(guessed.get(i));
					flag[i] = 1;
					if (correct.size() == 0)
					{
						win = true;
						break;
					}
				}
				else
				{
					count++;
					if (count == 7)
					{
						break;
					}
				}
			}
			if (correct.size() != 0 && win == false)
			{
				if (count >= 7)
				{
					System.out.println("Round " + n + "\nYou lose.");
				}
				else
				{
					System.out.println("Round " + n + "\nYou chickened out.");
				}
			}
			if (win == true)
			{
				System.out.println("Round " + n + "\nYou win.");
			}
		}
	}
	public static List<Character> removeDuplicates(List<Character> guessed)
	{
		List <Character> removed = new ArrayList<>();
		for (int i = 0; i < guessed.size(); i++)
		{
			if (!(removed.contains(guessed.get(i))))
			{
				removed.add(guessed.get(i));
			}
		}
		guessed = removed;
		return guessed;
	}
}
