//
// Created by Nguyen Quang Huy on 10/3/2020.
//


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int j = n-1; j > n/2; --j) {
            cout << a[j] << " " << a[n-1-j] << " ";
        }
        if(n%2==0){
            cout << a[n/2]<<" " << a[n/2-1];
        } else{
            cout << a[n/2];
        }
        cout << endl;
    }
    return 0;
}
