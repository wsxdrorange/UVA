#include<algorithm>
#include<iostream>
using namespace std;
int m,n;
char grid[100][100];
void recursiveCheck(int i, int j){
    grid[i][j] = '*';
    if (i-1 >= 0 && grid[i-1][j] == '@'){
        recursiveCheck(i-1, j);
    }
    if (i+1 < m && grid[i+1][j] == '@'){
        recursiveCheck(i+1, j);
    }
    if (j-1 >= 0 && grid[i][j-1] == '@'){
        recursiveCheck(i, j-1);
    }
    if (j+1 < n && grid[i][j+1] == '@'){
        recursiveCheck(i, j+1);
    }
    if (i-1 >= 0 && j-1 >= 0 && grid[i-1][j-1] == '@'){
        recursiveCheck(i-1, j-1);
    }
    if (i-1 >= 0 && j+1 < n && grid[i-1][j+1] == '@'){
        recursiveCheck(i-1, j+1);
    }
    if (i+1 < m && j-1 >= 0 && grid[i+1][j-1] == '@'){
        recursiveCheck(i+1, j-1);
    }
    if (i+1 < m && j +1 < n && grid[i+1][j+1] == '@'){
        recursiveCheck(i+1, j+1);
    }
}
int main ()
{
    int count = 0;
    while (cin >> m >> n && (m != 0)){
        count = 0;
        string ln;
        for (int i = 0; i < m; i++){
            cin >> ln;
            for (int j = 0; j < n; j++){
                grid[i][j] = ln.at(j);
            }
        }
        for (int i =0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == '@'){
                    recursiveCheck(i,j);
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
