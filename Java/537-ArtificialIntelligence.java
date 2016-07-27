import java.util.*;
public class ArtificialIntelligence {
	public static void main(String args [])
	{
		Scanner in = new Scanner(System.in);
		int times = in.nextInt();
		in.nextLine();
		for (int i = 1; i <= times; i++)
		{
			String prob = in.nextLine();
			String data1 = "";
			prob = prob.substring(prob.indexOf('=')-1);
			prob = addSpace(prob);
			data1 = prob.substring(0, prob.indexOf(' '));
			prob = prob.substring(prob.indexOf(' '));
			prob = prob.substring(prob.indexOf('=')-1);
			String data2 = "";
			prob = addSpace2(prob);
			if (prob.contains(" "))
			{
				data2 = prob.substring(0,prob.indexOf(' '));
			}
			else 
			{
				data2 = prob.substring(0,prob.length()-1);
			}
			if (data1.charAt(data1.length()-1) == '.' || data1.charAt(data1.length()-1) == ',')
			{
				data1 = data1.substring(0, data1.length()-1);
			}
			if (data2.charAt(data2.length()-1) == '.' || data2.charAt(data2.length()-1) == ',')
			{
				data2 = data2.substring(0, data2.length()-1);
			}
			boolean needU = true;
			boolean needI = true;
			boolean needP = true;
			if (data1.charAt(0) == 'U' || data2.charAt(0) == 'U')
			{
				needU = false;
			}
			if (data1.charAt(0) == 'I' || data2.charAt(0) == 'I')
			{
				needI = false;
			}
			if (data1.charAt(0) == 'P' || data2.charAt(0) == 'P')
			{
				needP = false;
			}
			if (needP)
			{
				double U = 0;
				double I = 0;
				if (Character.isAlphabetic(data1.charAt(data1.length()-2)))
				{
					char prefix = data1.charAt(data1.length()-2);
					char value = data1.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-2));
						if (prefix =='m')
						{
							I /= 1000;
						}
						else if (prefix == 'k')
						{
							I *= 1000;
						}
						else if (prefix == 'M')
						{
							I *= Math.pow(10, 6);
						}
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-2));
						if (prefix =='m')
						{
							U /= 1000;
						}
						else if (prefix == 'k')
						{
							U *= 1000;
						}
						else if (prefix == 'M')
						{
							U *= Math.pow(10, 6);
						}
					}
				}
				else 
				{
					char value = data1.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-1));
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-1));
					}
				}
				if (Character.isAlphabetic(data2.charAt(data2.length()-2)))
				{
					char prefix = data2.charAt(data2.length()-2);
					char value = data2.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-2));
						if (prefix =='m')
						{
							I /= 1000;
						}
						else if (prefix == 'k')
						{
							I *= 1000;
						}
						else if (prefix == 'M')
						{
							I *= Math.pow(10, 6);
						}
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-2));
						if (prefix =='m')
						{
							U /= 1000;
						}
						else if (prefix == 'k')
						{
							U *= 1000;
						}
						else if (prefix == 'M')
						{
							U *= Math.pow(10, 6);
						}
					}
				}
				else 
				{
					char value = data2.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-1));
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-1));
					}
				}
				System.out.println("Problem #" + i);
				System.out.print("P=");
				System.out.printf("%.2f", U*I);
				System.out.println("W");
			}
			else if (needU)
			{
				double P = 0;
				double I = 0;
				if (Character.isAlphabetic(data1.charAt(data1.length()-2)))
				{
					char prefix = data1.charAt(data1.length()-2);
					char value = data1.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-2));
						if (prefix =='m')
						{
							I /= 1000;
						}
						else if (prefix == 'k')
						{
							I *= 1000;
						}
						else if (prefix == 'M')
						{
							I *= Math.pow(10, 6);
						}
					}
					else if (value == 'P')
					{
						P = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-2));
						if (prefix =='m')
						{
							P /= 1000;
						}
						else if (prefix == 'k')
						{
							P *= 1000;
						}
						else if (prefix == 'M')
						{
							P *= Math.pow(10, 6);
						}
					}
				}
				else 
				{
					char value = data1.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-1));
					}
					else if (value == 'P')
					{
						P = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-1));
					}
				}
				if (Character.isAlphabetic(data2.charAt(data2.length()-2)))
				{
					char prefix = data2.charAt(data2.length()-2);
					char value = data2.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-2));
						if (prefix =='m')
						{
							I /= 1000;
						}
						else if (prefix == 'k')
						{
							I *= 1000;
						}
						else if (prefix == 'M')
						{
							I *= Math.pow(10, 6);
						}
					}
					else if (value == 'P')
					{
						P = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-2));
						if (prefix =='m')
						{
							P /= 1000;
						}
						else if (prefix == 'k')
						{
							P *= 1000;
						}
						else if (prefix == 'M')
						{
							P *= Math.pow(10, 6);
						}
					}
				}
				else 
				{
					char value = data2.charAt(0);
					if (value == 'I')
					{
						I = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-1));
					}
					else if (value == 'P')
					{
						P = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-1));
					}
				}
				System.out.println("Problem #" + i);
				System.out.print("U=");
				System.out.printf("%.2f", P/I);
				System.out.println("V");
			}
			else if (needI)
			{
				double U = 0;
				double P = 0;
				if (Character.isAlphabetic(data1.charAt(data1.length()-2)))
				{
					char prefix = data1.charAt(data1.length()-2);
					char value = data1.charAt(0);
					if (value == 'P')
					{
						P = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-2));
						if (prefix =='m')
						{
							P /= 1000;
						}
						else if (prefix == 'k')
						{
							P *= 1000;
						}
						else if (prefix == 'M')
						{
							P *= Math.pow(10, 6);
						}
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-2));
						if (prefix =='m')
						{
							U /= 1000;
						}
						else if (prefix == 'k')
						{
							U *= 1000;
						}
						else if (prefix == 'M')
						{
							U *= Math.pow(10, 6);
						}
					}
				}
				else 
				{
					char value = data1.charAt(0);
					if (value == 'P')
					{
						P = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-1));
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data1.substring(data1.indexOf('=')+1,data1.length()-1));
					}
				}
				if (Character.isAlphabetic(data2.charAt(data2.length()-2)))
				{
					char prefix = data2.charAt(data2.length()-2);
					char value = data2.charAt(0);
					if (value == 'P')
					{
						P = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-2));
						if (prefix =='m')
						{
							P /= 1000;
						}
						else if (prefix == 'k')
						{
							P *= 1000;
						}
						else if (prefix == 'M')
						{
							P *= Math.pow(10, 6);
						}
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-2));
						if (prefix =='m')
						{
							U /= 1000;
						}
						else if (prefix == 'k')
						{
							U *= 1000;
						}
						else if (prefix == 'M')
						{
							U *= Math.pow(10, 6);
						}
					}
				}
				else 
				{
					char value = data2.charAt(0);
					if (value == 'P')
					{
						P = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-1));
					}
					else if (value == 'U')
					{
						U = Double.parseDouble(data2.substring(data2.indexOf('=')+1,data2.length()-1));
					}
				}
				System.out.println("Problem #" + i);
				System.out.print("I=");
				System.out.printf("%.2f", P/U);
				System.out.println("A");
			}
			System.out.println();
		}
	}
	public static String addSpace(String s)
	{
		String temp = s.substring(s.indexOf('=')+1);
		int cutoff1 = 0;
		for (int i = 0; i < temp.length() - 1; i++)
		{
			if (temp.charAt(i+1) == 'I' || temp.charAt(i+1) == 'P' || temp.charAt(i+1) == 'U')
			{
				cutoff1 = i;
				break;
			}
		}
		return (s.substring(0, 2) + temp.substring(0, cutoff1+1)+" "+temp.substring(cutoff1+1));
	}
	public static String addSpace2(String s)
	{
		String temp = s.substring(s.indexOf('=')+1);
		int cutoff1 = 0;
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp.charAt(i) == 'A' || temp.charAt(i) == 'W' || temp.charAt(i) == 'V')
			{
				cutoff1 = i;
				break;
			}
		}
		return (s.substring(0, 2) + temp.substring(0, cutoff1+1)+" "+temp.substring(cutoff1+1));
	}
	
}
