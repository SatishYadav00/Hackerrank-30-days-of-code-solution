#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int date, month, year;
    cin >> date;
    cin >> month;
    cin >> year;

    int de, me, ye;
    cin >> de;
    cin >> me;
    cin >> ye;

    int Fine_Hackos = 0;

    if (year > ye) Fine_Hackos = 10000;
    else if (year == ye) {
        if (month > me) Fine_Hackos = (month - me) * 500;
        else if (month == me && date > de) Fine_Hackos = (date - de) * 15;
    }

    cout << Fine_Hackos;  
    return 0;
}
