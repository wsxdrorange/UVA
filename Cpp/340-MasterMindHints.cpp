#include <iostream>

using namespace std;

int main() {
    int times;
    int count = 1;
    while (cin >> times && (times != 0))
    {
        int code [times];
        for (int i = 0; i < times; i++)
        {
            cin >> code[i];
        }
        int guess[times];
        bool empty = false;
        cout << "Game " << count << ":" <<endl;
        while (!(empty))
        {
            int temp[times];
            copy(code,code+times,temp);
            int strong = 0;
            int weak = 0;
            empty = true;
            for (int i = 0; i < times; i++)
            {
                cin >> guess[i];
                if (guess[i] != 0)
                {
                    empty = false;
                }
            }
            if (empty)
            {
                break;
            }
            for (int i = 0; i < times; i++)
            {
                if (temp[i] == guess[i])
                {
                    strong++;
                    temp[i] = -1;
                    guess[i] = 0;
                }
            }
            for (int i = 0; i < times; i++)
            {
                for (int j = 0; j < times; j++)
                {
                    if (temp[i] == guess[j])
                    {
                        weak++;
                        temp[i] = -1;
                        guess[j] = 0;
                    }
                }
            }
            cout << "    (" << strong << "," << weak << ")" <<endl;
        }
        count++;
    }
}
