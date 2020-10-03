//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<iostream>
using namespace std;
void tohop(int i);
int x[1000];
int n,k;
int main()
{
    int t;
    cin >> t;
    while (t--){
        cin>>n;
        cin>>k;
        x[0]=0;
        tohop(1);
        cout << endl;
    }
}
void xuat()
{
    for (int i=1;i<=k;i++)
        cout<<x[i];
    cout<<" ";
}
void tohop(int i)
{
    for (int j=x[i-1]+1;j<=n-k+i;j++)
    {
        x[i]=j;
        if (i==k)  	xuat();
        else           tohop(i+1);
    }
}
