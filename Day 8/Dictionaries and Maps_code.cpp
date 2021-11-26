#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    map<string,long>PhoneBook ;
    string name;
    long PhoneNo;
    for(int i=0;i<n;i++)
    {
        cin>>name>>PhoneNo;
        PhoneBook[name]=PhoneNo;
        
    }
    while(cin>>name)
    {
        if(PhoneBook.find(name) != PhoneBook.end())
        {
            cout<<name<<"="<<PhoneBook.find(name)->second<<endl;
            
        }
        else {
        cout<<"Not found"<<endl;
        }
    }
     
    return 0;
}
