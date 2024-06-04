# include <bits/stdc++.h>
using namespace std;

void explainVectors () {   // Vector is a Container which is dynamic in nature
 // Vector is a Container Only which stores elements in a similar fashion as the array does
    vector<int> v;
    v.push_back(1); // It will add 1 in empty container
    v.emplace_back(2); // It will make container of 2 and add 2 after 1 it is faster than push back

    vector<pair<int, int>>vec;

    vec.push_back({1, 2}); // If using push back in vector pair use curly braces
    vec.emplace_back(1, 2); // If using emplace_back in vector don't need to use curly braces

    vector<int> v (5, 100); // It means Container containing 5 instances of 100

    vector<int> v (5); // If don't want values use this to allocate container with 5 values of any garbuage value

    vector <int> v1(5, 100);
    vector <int> v2 = v1; // copy constructor
    

}

int main () {
    
    return 0;
}