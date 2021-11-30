#include <bits/stdc++.h>

using namespace std;


int main()
{

    vector< vector<int> > arr(6,vector<int>(6));
    
   for(int i = 0;i < 6;i++){
       for(int j = 0;j < 6;j++){
          cin >> arr[i][j];
       }
    }
   
    int n = arr.size(); //size of rows 
    int m = arr[0].size(); //size of columns
    
    int max = numeric_limits<int>::min();
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < m - 2; j++) {
            int sum = 0;
            
            for (int k = j; k <= j + 2; k++) {
                sum += (arr[i][k] + arr[i+2][k]); //sum of upper part and lower part
            }
            
            sum += arr[i+1][j+1];
            
            if (sum > max)
             max = sum;
        }
    }
     cout << max<< endl;
    return 0;
}


