# include <bits/stdc++.h>
using namespace std;

int main () {
    // 1d One Dimensional Array
    int arr[5];
    cout<<"Enter 5 integers in Array"<<endl;
    cin>>arr[0] >>arr[1] >>arr[2] >>arr[3] >>arr[4];

    cout<<"The Stored num on index 4 is "<<arr[4]<<endl;

    // 2d Two Dimensional Array
    int arr1 [3] [5]; // first[] is row second[] is column

    arr1[1][4] = 27;
    cout<<"The value of idex 1 and 4 in blocks "<<arr1[1][4];  // If not defined any location it will give guarbage value
    return 0;
}


# include <bits/stdc++.h>
using namespace std;

int main () {
    string name = "Moeez"; // Every Character Stored at index and First index will be zero
    int len = name.size(); // len is 5
    name[len-1] = 'Q';
    cout<<name[len-1]<<endl; // String is a collection of character so have to write when want change in '' not in ""
    cout<<name[4]<<endl;
    cout<<name;
    return 0;
}