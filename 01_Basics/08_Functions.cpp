#include <bits/stdc++.h>
using namespace std;

// Functions are set of code which does something for you
// Function are used to modularize code
// Functions are used to increase  readability
// Functions are used to use same code multiple times
// void --> which does not return anything
// return -->
// parameterized
// non parmeterized

void printName()
{ // Void Function
    cout << "Hey Moeez" << endl;
}

void printNames(string name)
{ // Void Parameterized Function
    cout << "Hey " << name << endl;
}

int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int main()
{

    string name;
    cout << "Enter Name" << endl;
    cin >> name;

    printName();

    printNames(name);

    int num1;
    int num2;

    cout << "Enter Number 1" << endl;
    cin >> num1;

    cout << "Enter Number 2" << endl;
    cin >> num2;

    int res = sum(num1, num2);
    cout << "The Sum is " << res << endl; // This is for return function for void i don't have to do this instead in function block cout instead of return and void instead of int remaining will remain

    // inbuilt Function Example

    int num3;
    int num4;

    cout << "Enter Number for Finding minimum" << endl;
    cin >> num3;
    cout << "Enter Number for Finding minimum" << endl;
    cin >> num4;
    cout <<"Miuimum is "<< min(num3, num4);
    return 0;
}

# include <bits/stdc++.h>
using namespace std;

// pass by value

void doSomeThing (int num){
 cout<<num<<endl;
 num+=5;
 cout<<num<<endl;
 num+=5;
 cout<<num<<endl;
}

// Pass By Referenece

void doSomeThings(string &s){
 s[4] = 'x';
 
 cout<<s<<endl;
}

int main () {
    int num =10;
    doSomeThing(num);

    cout<<num<<endl; // 10 is printed after 20 because copy of 10 goes toward function when pass value as parameters This is Pass by value

    string s="Moeez";
    doSomeThings(s);
    cout<<s<<endl; // Result will be Moix Because in function we used & with parameter it means Pass By reference and it will change original
    return 0;


}