//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while ((getchar()) != '\n');
    while (t--){
        string s;
        int temp, res;
        getline(cin, s);
        for(int i = 0; i < s.size()-1; ++i) {
            temp = 1;
            for(int j = i+1; j < s.size(); ++j) {
                if(s[i]==s[j]){
                    temp = 0;
                    s[j] = '@';
                }
            }
            if (!temp) s[i] = '@';
        }
        for(int i = 0; i < s.size(); ++i) {
            if(s[i]!='@')
                cout << s[i];
        }
        cout << endl;
    }
}
