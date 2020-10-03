//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int tmp = 0, temp;
    if(s[0] > 95){
        s[0] = s[0] - 32;
        cout << s[0];
    }else{
        cout << s[0];
    }
    for(int k = s.size()-1; k >= 0; --k) {
        if (s[k] != ' ' && s[k-1] == ' '){
            temp = k;
            break;
        }
    }
    for(int i = 1; i < temp-1; ++i) {
        if(s[i] != ' ' && s[i-1] == ' '){
            if(s[i] > 95){
                s[i] = s[i] - 32;
                cout << " " << s[i];
            }else{
                cout << " " << s[i];
            }
        }else if(s[i] > 64){
            if(s[i] < 95){
                s[i] = s[i] + 32;
                cout << s[i];
            }else{
                cout << s[i];
            }
        }
    }
    cout << ", ";
    for(int j = temp; j < s.size(); ++j) {
        if(s[j] > 95){
            s[j] = s[j] - 32;
            cout << s[j];
        }else{
            cout << s[j];
        }
    }
}
