#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    int column;

    cout << "Enter the number of column" << endl;
    cin >> column;
    cout << "Enter the number of row" << endl;
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=column; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}