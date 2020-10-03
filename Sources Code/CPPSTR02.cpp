//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int res1=0, res2=0;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); ++i) {
            if(i % 2 == 0){
                res1+=(s[i]-'0');
            }else{
                res2+=(s[i]-'0');
            }
        }
        if(abs(res1-res2)%11==0){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
