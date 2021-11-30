#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;
      cin>>n;
      
  
      int maxi=0;
      int sum=0;
      
      while(n>0)
          {
              if(n%2==1)
              {
                  sum++;
                  if(sum>maxi)
                  {
                      maxi=sum;
                  }
              }
          else {
          sum=0;
          }
          n=n/2;
          }
          cout<<maxi;

    return 0;
}


