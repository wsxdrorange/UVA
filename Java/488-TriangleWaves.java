/**
 * Created by rzhang on 3/1/16.
 */
import java.util.Scanner;
public class TriangleWaves2 {
    public static void main (String args []) {
        Scanner in = new Scanner(System.in);
        int times = in.nextInt();
        in.nextLine();
        StringBuffer sb2 = new StringBuffer();
        for (int i = 0; i < times; i++) {
            int amp = in.nextInt();
            int freq = in.nextInt();
            for (int j = 0; j < freq; j++) {
            	if (i == times-1 && j == freq-1)
            	{
            		sb2.append(printWave(amp));
            	}
            	else
            	{
            		sb2.append(printWave(amp) + "\n");
            	}
            }
            in.nextLine();
        }
        if (sb2.length() > 2)
        {
        	//sb2.replace(sb2.length()-1, sb2.length()-1, "");
        }
        
        System.out.print(sb2.toString());
        //System.out.println('x');
    }
    public static String printWave(int amp)
    {
    	StringBuffer sb = new StringBuffer();
        if (amp == 1)
        {
        	sb.append("1\n");
        }
        else if (amp == 2)
        {
        	sb.append("1\n22\n1\n");
        }
        else if (amp == 3)
        {
        	sb.append("1\n22\n333\n22\n1\n");
        }
        else if (amp == 4)
        {
        	sb.append("1\n22\n333\n4444\n333\n22\n1\n");
        }
        else if (amp == 5)
        {
        	sb.append("1\n22\n333\n4444\n55555\n4444\n333\n22\n1\n");
        }
        else if (amp == 6)
        {
        	sb.append("1\n22\n333\n4444\n55555\n666666\n55555\n4444\n333\n22\n1\n");
        }
        else if (amp == 7)
        {
        	sb.append("1\n22\n333\n4444\n55555\n666666\n7777777\n666666\n55555\n4444\n333\n22\n1\n");
        }
        else if (amp == 8)
        {
        	sb.append("1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1\n");
        }
        else if (amp == 9)
        {
        	sb.append("1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n999999999\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1\n");
        }
        return sb.toString();
    }
}
