/*
Caleb Acree
C++ Fall 2022
Due: September 14, 2022
Lab 2 Exploring Output
This lab is designed to get you familiar output to the command prompt using C++
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string s = "   *";
    const string S = "        *";
    const string st = "*";
    
    cout << s << S << S << S;
    cout << endl << endl << st << S << S << S;
    cout << endl << endl << s << S << S << S;
    cout << endl << endl << st << S << S << S;
    cout << endl << endl << s << S << S << S;
    cout << endl << endl << st << S << S << S;
    cout << endl << endl << s << S << S << S;
    cout << endl << endl << st << S << S << S;
    
    return 0;
}
