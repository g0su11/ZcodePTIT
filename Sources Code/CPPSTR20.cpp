//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ((getchar()) != '\n');
    while (t--){
        string myStr;
        getline(cin, myStr);
        int n = myStr.size();
        int i, j = n-1;
        for(i = n-1; i >= 0; i--) {
            if(myStr[i] == ' ') {
                for(int pos = i+1; pos <= j; pos++) cout << myStr[pos];
                j = i-1;
                printf(" ");
            }
            if(i == 0) {
                for(int pos = i; pos <= j; pos++) cout << myStr[pos];
            }
        }
        cout << endl;
    }
}
