//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
long long mod(string num, long long a)
{
    long long res = 0;
    for (long long i = 0; i < num.size(); i++)
        res = (res*10 + num[i] - '0') % a;
    return res;
}
int main()
{
    long long t;
    cin >> t;
    while (t--){
        long long m;
        string num;
        cin >> num >> m;
        cout << mod(num, m) << endl;
    }
    return 0;
}
