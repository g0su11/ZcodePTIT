//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

void findgcd(int n, int x, int y)
{
    int g = gcd(x,y);
    for (int i = 0; i < g; i++)
        cout << n;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, x, y;
        cin >> n >> x >> y;
        findgcd(n, x, y);
    }
    return 0;
}
