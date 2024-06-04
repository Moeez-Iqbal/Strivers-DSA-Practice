#include <bits/stdc++.h>
using namespace std;

/*
Take a Day no and print it's Coresponding day
for 1. Monday
for5. Friday
*/

int main()
{

    int day;
    cout << "Enter Day Number " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:

        cout << "Tuesday";
        break;

    case 3:

        cout << "Wednesday";
        break;

    case 4:

        cout << "Thursday";
        break;
        
    case 5:

        cout << "Friday";
        break;

    case 6:

        cout << "Saturday";
        break;

    case 7:

        cout << "Sunday";
        break;

    default:
        cout << "Inavlid Day Number";
        break;
    }

    return 0;
}