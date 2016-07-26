/**
 * Created by rzhang on 3/24/16.
 */
import java.util.*;
public class LinearCellularAutomata {
    public static void main (String args [])
    {
        Scanner in = new Scanner(System.in);
        int times = in.nextInt();
        for (int i = 0; i < times; i++)
        {
            int DNA [] = new int [10];
            for (int j = 0; j < 10; j++)
            {
                DNA[j] = in.nextInt();
            }
            StringBuilder sb = new StringBuilder();
            char a[] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
            sb.append(a);
            sb.append("\n");
            int b[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            int c [] = Arrays.copyOf(b, b.length);
            for (int j = 0; j < 49; j++)
            {
                for (int k = 0; k < 40; k++)
                {
                	int tot = 0;
                    if (k == 0)
                    {
                    	tot = b[k] + b[k+1];
                    	c[k] = tot;
                    	
                    }
                    else if (k == 39)
                    {
                    	tot = b[k-1] + b[k];
                		c[k] = tot;
                    }
                    else
                    {
                    	tot = b[k-1] + b[k] + b[k+1];
                		c[k] = tot;
                    }
                }
                for (int k = 0; k < 40; k++)
                {
                	int num = DNA[c[k]];
                	if (num == 0)
                	{
                		a[k] = ' ';
                	}
                	else if (num == 1)
                	{
                		a[k] = '.';
                	}
                	else if (num == 2)
                	{
                		a[k] = 'x';
                	}
                	else if (num == 3)
                	{
                		a[k] = 'W';
                	}
                }
                for (int k = 0; k < 40; k++)
                {
                	char t = a[k];
                	if (t == ' ')
                	{
                		c[k] = 0;
                	}
                	else if (t == '.')
                	{
                		c[k] = 1;
                	}
                	else if (t == 'x')
                	{
                		c[k] = 2;
                	}
                	else if (t == 'W')
                	{
                		c[k] = 3;
                	}
                }
                b = Arrays.copyOf(c, c.length);
                sb.append(a);
                sb.append("\n");
            }
            if (i == times-1)
            {
            	sb.replace(sb.length()-1, sb.length(), "");
            }
            System.out.println(sb.toString());
        }
    }
}
