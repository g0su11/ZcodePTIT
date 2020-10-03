//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n%i==0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long m = n;
        for(long long i = 2; i <= sqrt(n); ++i) {
            if(isPrime(i)){
                while (m%i==0){
                    cout << i << " ";
                    m/=i;
                }
            }
        }
        if(isPrime(m)) cout << m;
        cout << endl;
    }
}
