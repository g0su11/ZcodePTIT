//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int GCD(int a, int b){
    if(b==0) return a;
    return GCD(b, a%b);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, count=0;
        cin >> x;
        for(int i = 1; i <= x; ++i) {
            if(GCD(i, x) == 1){
                count++;
            }
        }
        if (isPrime(count))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
