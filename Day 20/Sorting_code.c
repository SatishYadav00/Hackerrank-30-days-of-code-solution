#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   cin>>n;

    vector<int> a(n);
     for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num_of_swpas=0;
    
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<n-1;j++)
        { 
          if (a[j]>a[j+1])
          {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              num_of_swpas++;
          }  
        }
        if(num_of_swpas==0)
        break;
    }
    printf("Array is sorted in %d swaps.\n", num_of_swpas);
    printf("First Element: %i\n", a[0]);
    printf("Last Element: %i\n", a[a.size() - 1]);
    return 0;
}
