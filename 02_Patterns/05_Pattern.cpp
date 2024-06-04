#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;

    cout << "Enter number of rows" << endl;
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int k = row; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}