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
        int temp=1, res;
        getline(cin, s);
        res = s.size();
        for(int i = 0; i < s.size()-1; ++i) {
            for(int j = i+1; j < s.size(); ++j) {
                if(s[i] == s[j]){
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}