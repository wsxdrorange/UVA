import java.util.*;
public class WheresWaldorf {
    public static void main(String args [])
    {
        Scanner in = new Scanner(System.in);
        int times = in.nextInt();
        for (int t = 0; t < times; t++) {
            int h = in.nextInt();
            int w = in.nextInt();
            char[][] board = new char[h][w];
            for (int i = 0; i < h; i++) {
                board[i] = in.next().toCharArray();
            }
            int neededWords = in.nextInt();
            String[] words = new String[neededWords];
            for (int i = 0; i < neededWords; i++) {
                words[i] = in.next().toLowerCase();
            }
            for (int i = 0; i < neededWords; i++) {
                int savedJ = board.length+1;
                int savedK = board[0].length+1;
                for (int j = 0; j < board.length; j++) {
                    for (int k = 0; k < board[j].length; k++) {
                        if (Character.toLowerCase(board[j][k]) == words[i].charAt(0)) {
                            if (checkUp(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkDown(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkLeft(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkRight(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkUpRight(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkUpLeft(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkDownRight(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            } else if (checkDownLeft(board, words[i], j, k)) {
                                if (j < savedJ) {
                                    savedJ = j;
                                    savedK = k;
                                }
                            }
                        }
                    }

                }
                System.out.println(savedJ+1 + " " + ++savedK);
            }
            if (t != times-1)
        	{
            	System.out.println();
        	}
        }
    }
    public static boolean checkUp(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (j == 0 && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            j--;
        }
        return true;
    }
    public static boolean checkDown(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (j == board.length-1 && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            j++;
        }
        return true;
    }
    public static boolean checkLeft(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (k == 0 && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            k--;
        }
        return true;
    }
    public static boolean checkRight(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (k == board[j].length-1 && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            k++;
        }
        return true;
    }
    public static boolean checkUpRight(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if ((k == board[j].length-1 || j == 0) && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            k++;
            j--;
        }
        return true;
    }
    public static boolean checkUpLeft(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if ((k == 0 || j == 0) && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            k--;
            j--;
        }
        return true;
    }
    public static boolean checkDownRight(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if ((k == board[j].length-1 || j == board.length-1) && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            k++;
            j++;
        }
        return true;
    }
    public static boolean checkDownLeft(char [][] board, String word,int j,int k)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if ((k == 0 || j == board.length-1) && i != word.length()-1)
            {
                return false;
            }
            if (Character.toLowerCase(board[j][k]) != word.charAt(i))
            {
                return false;
            }
            k--;
            j++;
        }
        return true;
    }
}
