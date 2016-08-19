
#include<iostream>
using namespace std;
string comparePoint(int mainX, int mainY, int tempX, int tempY){
    if (mainX == tempX || mainY == tempY){
        return "divisa";
    }
    else if (tempX < mainX && tempY < mainY){
        return "SO";
    }
    else if (tempX > mainX && tempY < mainY){
        return "SE";
    }
    else if (tempX < mainX && tempY > mainY){
        return "NO";
    }
    else if (tempX > mainX && tempY > mainY){
        return "NE";
    }
}
int main ()
{
    int queries;
    int mainX;
    int mainY;
    int tempX;
    int tempY;
    while (cin >> queries && queries != 0){
        cin >> mainX;
        cin >> mainY;
        for (int i = 0; i < queries; i++){
            cin >> tempX;
            cin >> tempY;
            cout << comparePoint(mainX,mainY,tempX,tempY) << endl;
        }
    }
}
