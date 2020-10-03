//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6+5;
int A[oo], F[oo];
int main(){
    int test; cin >> test;
    while(test--){
        ll n, k; cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> A[i]; F[i] = 0;
        }
        sort(A, A+n);
        ll local = 0, ans = 0;
        for(int i=0; i<n; i++){
            F[i] = (i == 0)? 0 : F[i-1]-1;
            for(int j=local+1; j<n; j++){
                if(A[j] - A[i] >= k) break;
                else{
                    local++; F[i]++;
                }
            }
            ans += F[i];
        }
        cout << ans << endl;
    }
}
