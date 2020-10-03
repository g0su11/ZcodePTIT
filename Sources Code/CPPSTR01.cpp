//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k, count =0;
        string s;
        cin >> s >> k;
        for(int i = 0; i < s.size(); ++i) {
            for(int j = i+1; j < s.size(); ++j) {
                if(s[i] == s[j]){
                    s[j] = ' ';
                }
            }
        }
        for(int l = 0; l < s.size(); ++l) {
            if(s[l] != ' '){
                count++;
            }
        }
        if (26 - count <= k){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
