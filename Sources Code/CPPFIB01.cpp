//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    int i,f1=0,f2=1,f;
    for (i=2; i<=n; i++)
    {
        f=(f1+f2)%1000000007;
        f1=f2;
        f2=f;
    }
    return f;
}
int main() {
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}

