#include <bits/stdc++.h>
using namespace std;

// Write a Program that takes an input of  age and Print if you are adult or not?

int main()
{
    int age;

    cout << "Enter You Age " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are Adult";
    }
    else if (age > 12)
    {
        cout << "You are TeenAger";
    }
    else
    {
        cout << "You are Kid";
    }

    /*
    A school has Following Grade System
    a.below 25 -F
    b.25 to 44 -E
    c.45 to 49 -D
    d.50 to 59 -C
    e.60 to 79 -B
    f.80 to 100 -A

    Ask User to Enter Marks and Print Coresponding Grades
    */

    int marks;
    cout << "\n"
         << "Enter Your Marks ";
    cin >> marks;

    //    if (marks<25)
    //    {
    //     cout<<"F";
    //    }
    //    if (marks>=25 && marks<=44) {
    //     cout<<"E";
    //    }
    //    if (marks>=45 && marks<=49) {
    //     cout<<"D";
    //    }
    //    if (marks>=50 && marks<=59) {
    //     cout<<"C";
    //    }
    //    if (marks>=60 && marks<=79) {
    //     cout<<"B";
    //    }
    //    if (marks>=80 && marks<=100) {
    //     cout<<"A";
    //    } It will execute but takes alot of time due to if condition check everytime

    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks <= 44)
    {
        cout << "E";
    }
    else if (marks <= 49)
    {
        cout << "D";
    }
    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 100)
    {
        cout << "A";
    }

    // This will  Execute Faster beacuse of else if and don't need to check multiple time

    /*
    Take the age from the user and Decide accordingly
    1. if age < 18 -> not eligible for job
    2. if age >=18 and age <=54 -> eligible for job
    3. if age >=55 and age<=57 -> eligible for job but retirement soon
    4. if age > 57 -> retirement time
    */
   // nested if

    int applyAge;
    cout << "\n"
         << "Enter Apply age" << endl;
    cin >> applyAge;

    if (applyAge<18)
    {
        cout << "Not Eligible for job";
    }
    else if (applyAge <= 57)
    {
        cout << "Eligible for job";
        if (applyAge >=55)
    {
        cout << " but Retirement soon";
    }
    }
    else
    {
        cout << "Retirement Time";
    }

    return 0;
}