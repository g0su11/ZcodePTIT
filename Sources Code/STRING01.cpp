//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    int temp, temp1;
    getline(cin , s1);
    cin >> s2;
    for(int i = 0; i < s1.size(); ++i) {
        if(s1[i] == s2[0] && s1[s2.size()+i-1] == s2[s2.size()-1]){
            temp = i + s2.size();
            temp1 = i;
        }
    }
    for(int j = 0; j < temp1; ++j) {
        cout << s1[j];
    }
    for(int j = temp+1; j < s1.size(); ++j) {
        cout << s1[j];
    }
}
