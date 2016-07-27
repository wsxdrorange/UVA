import java.util.*;
public class ExcusesExcuses {
	public static void main(String args [])
	{
		Scanner in = new Scanner(System.in);
		int count = 1;
		while(true)
		{
			int keys = in.nextInt();
			int excuses = in.nextInt();
			in.nextLine();
			String keyWords []= new String [keys];
			for (int i =0; i < keys; i++)
			{
				keyWords[i] = in.nextLine().toLowerCase();
			}
			String excuseLines [] = new String [excuses];
			String excuseLinesMutable [] = new String [excuses];
			for (int i =0 ;i < excuses; i++)
			{
				excuseLines[i] = in.nextLine();
				excuseLinesMutable[i] = addSpace(excuseLines[i]);
			}
			int counter [] = new int [excuses];
			for (int i = 0; i < excuseLines.length; i++)
			{
				String splitter[] = excuseLinesMutable[i].split(" ");
				for (String s: splitter)
				{
					for (String t: keyWords)
					{
						if (t.equals(s.toLowerCase()))
						{
							counter[i]++;
						}
					}
				}
			}
			int max = counter[0];
			List<String> topWords = new ArrayList<>();
			for (int i = 1; i < counter.length; i++)
			{
				if (counter[i] >= max)
				{
					max = counter[i];
					topWords.add(excuseLines[i]);
				}
			}
			if (topWords.size() == 0)
			{
				topWords.add(excuseLines[0]);
			}
			else if (counter[0] == max)
			{
				topWords.add(excuseLines[0]);
			}
			System.out.println("Excuse Set #" + count);
			for (String s: topWords)
			{
				System.out.println(s);
			}
			System.out.println();
			count++;
			if (!in.hasNextInt())
			{
				break;
			}
		}
	}
	public static String addSpace(String s)
	{
		int index = 0;
		String t = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (Character.isLetter(s.charAt(i)) || s.charAt(i) == ' ')
			{
				t += s.charAt(i);
			}
			else
			{
				t += " ";
			}
		}
		return t;
	}
}
