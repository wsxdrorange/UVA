
/**
 * Created by Guest on 6/8/16.
 */
import java.util.*;
public class AutomaticPoetry {
    public static void main (String args []) {
        Scanner in = new Scanner(System.in);
        int times = in.nextInt();
        in.nextLine();
        for (int i = 0; i < times; i++) {
            String l1 = in.nextLine();
            String l2 = in.nextLine();
            String [] line1 = new String [5];
            line1[0] = l1.substring(0,l1.indexOf('<'));
            line1[1] = l1.substring(l1.indexOf('<')+1,l1.indexOf('>'));
            l1 = l1.substring(l1.indexOf('>')+1);
            line1[2] = l1.substring(0,l1.indexOf('<'));
            line1[3] = l1.substring(l1.indexOf('<')+1, l1.indexOf('>'));
            line1[4] = l1.substring(l1.indexOf('>')+1,l1.length());
            String temp = "";
            for (int j = 0; j < line1.length; j++)
            {
                temp += line1[j];
            }
            System.out.println(temp);
            l2 = l2.substring(0,l2.indexOf("..."))+line1[3]+line1[2]+line1[1]+line1[4];
            System.out.println(l2);
        }
    }
}
