import java.util.*;
import static java.lang.System.*;

public class RotatingSentences {
    public static void main(String args[]) {
        Scanner em = new Scanner(System.in);
        String s = "";
        char board[][] = new char[100][100];
        for (int i = 0; i < board.length; i++) {
            Arrays.fill(board[i], ' ');
        }
        int count = 0;
        int longest = 0;
        while (em.hasNextLine() && !(s = em.nextLine()).equals("")) {
            for (int i = 0; i < s.length(); i++) {
                board[count][i] = s.charAt(i);
            }
            if (s.length() > longest) {
                longest = s.length();
            }
            count++;
        }
        int j = 0;
        boolean empty = true;
        boolean brek = false;
        int l = 99;
        for (int i = board.length-1; i >= 0; i--)
        {
            for (int k = 0; k < board[i].length; k++)
            {
            	if (board[i][k] != 0 && board[i][k] != ' ')
            	{
            		empty = false;
            		l = i;
            		brek = true;
            		break;
            	}
            }
            if (brek == true)
            {
            	break;
            }
        }
        for (int k = 0; k < 100; k++)
        {
            for (int i = l; i >= 0; i--) {
                System.out.print((board[i][j] + ""));
            }
            System.out.println();
            j++;
        }
    }
}
