//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;


void init(int A[], int n){
    A[n-1]++;
    for(int i = n-1; i > 0 ; --i) {
        if(A[i] > 1){
            A[i-1]++;
            A[i]-=2;
        }
    }
}

void out(int A[], int n){
    for(int i = 0; i < n; ++i) {
        cout << A[i];
    }
    cout << " ";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int A[n+1];
        for(int i = 0; i < n; ++i) {
            A[i] = 0;
        }
        for(int j = 0; j < pow(2, n); ++j) {
            out(A, n);
            init(A, n);
        }
        cout << endl;
    }
}