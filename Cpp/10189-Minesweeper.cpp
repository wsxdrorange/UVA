#include <iostream>
using namespace std;

int main() {
    int height;
    int width;
    int count = 1;
    char digits [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    while ((cin >> height) && (cin >> width) && (height != 0 && width != 0))
    {
        if (count != 1)
        {
            cout << '\n';
        }
        char board [height][width];
        string in;
        for (int i = 0; i < height; i++)
        {
            cin >> in;
            for (int j = 0; j < width; j++)
            {
                board[i][j] = in.at(j);
            }
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (board[i][j] == '.')
                {
                    int bombsNear = 0;
                    if (i - 1 >= 0) {
                        if (board[i - 1][j] == '*') {
                            bombsNear++;
                        }
                    }
                    if (i + 1 < height) {
                        if (board[i + 1][j] == '*') {
                            bombsNear++;
                        }
                    }
                    if (j - 1 >= 0) {
                            if (board[i][j - 1] == '*') {
                            bombsNear++;
                        }
                    }
                    if (j + 1 < width) {
                        if (board[i][j + 1] == '*') {
                            bombsNear++;
                        }
                    }
                    if (j + 1 < width && i - 1 >= 0) {
                        if (board[i - 1][j + 1] == '*') {
                            bombsNear++;
                        }
                    }
                    if (j - 1 >= 0 && i - 1 >= 0) {
                        if (board[i - 1][j - 1] == '*') {
                            bombsNear++;
                        }
                    }
                    if (j - 1 >= 0 && i + 1 < height) {
                        if (board[i + 1][j - 1] == '*') {
                            bombsNear++;
                        }
                    }
                    if (j + 1 < width && i + 1 < height) {
                        if (board[i + 1][j + 1] == '*') {
                            bombsNear++;
                        }
                    }
                    char temp = digits[bombsNear];
                    board[i][j] = temp;
                }
            }
        }
        cout << "Field #" << count << ":" <<endl;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width ; j++)
            {
                cout << board[i][j];
            }
            cout << '\n';
        }
        count++;
    }
    return 0;
}
