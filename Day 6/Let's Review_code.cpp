#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    string s;
    cin>>n;
    int i;
    while(n--)
    {
        cin>>s;
        for(i=0;i<s.length();i=i+2)
        {
            cout<<s[i];
        }
        cout<<" ";
         for(i=1;i<s.length();i=i+2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }  
    return 0;
}

