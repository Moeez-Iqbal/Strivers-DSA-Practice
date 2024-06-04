# include <bits/stdc++.h>
using namespace std;

int main () {
    // int
    int x=10;
    cout<<x<<endl;

    // long

    long y=15000;
    cout<<y<<endl;

    // long long

    long long z= 788887799099;
    cout<<z<<endl;
    // float

    float a = 1.5;
    cout<<a<<endl;
    // double

    double b =2.67667;
    cout<<b<<endl;
    // long double

    long double c = 1.688877888;
    cout<<c<<endl;


    // string and getline

    string fname;
    string lname;

    cout<<"Enter First Name "<<endl;
    cin>>fname;

    cout<<"Enter Last Name "<<endl;
    cin>>lname;

    cout<<"First Name is "<<fname<<" Last Name is "<<lname<<endl;

    string str;
    getline(cin,str); // It will store two strings with space in them in str instead of Two variable work in other compiler due to setting in vcode
    cout<<str;

    char ch;
    cout<<"Enter Character "<<endl;
    cin>>ch;
    cout<<"Character is "<<ch;
    
    return 0;
}