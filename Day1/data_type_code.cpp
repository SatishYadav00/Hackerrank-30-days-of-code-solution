#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double e,k;
    string s1;
   
   
    
    // Read and save an integer, double, and String to your variables.
    cin>>j;
    cin>>e;
    getline(cin>>ws,s1); // 'ws' used to discard leading whitespace from an input stream.
    
    
    
    
    // Print the sum of both integer,double and string variables on a new line.
    
    k=d+e;
    cout<<(i+j)<<endl;
    printf("%.1f", k);
    printf("\n");
    cout << s + s1 << endl;
    

    return 0;
}
