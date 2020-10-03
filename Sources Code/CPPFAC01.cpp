//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
const int  inf = (1<<30) - 10;
using namespace std;
int vis[11];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char str[100];
        for(int i = 0;i < 11; ++i)
            vis[i] = 0;
        cin>>n;
        scanf("%s",str);
        for(int i = 0;i < n; ++i)
        {
            if(str[i] == '2')
            {
                vis[2]++;
            }
            else if(str[i] == '3')
            {
                vis[3]++;
            }
            else if(str[i] == '4')
            {
                vis[3]++;
                vis[2] = vis[2] + 2;
            }
            else if(str[i] == '5')
            {
                vis[5]++;
            }
            else if(str[i] == '6')
            {
                vis[5]++;
                vis[3]++;
            }
            else if(str[i] == '7')
            {
                vis[7]++;
            }
            else if(str[i] == '8')
            {
                vis[7]++;
                vis[2] = vis[2] + 3;
            }
            else if(str[i] == '9')
            {
                vis[7]++;
                vis[3] = vis[3] + 2;
                vis[2]++;
            }
        }
        for(int i = 10;i >= 0; --i)
        {
            if(vis[i])
            {
                while(vis[i])
                {
                    cout<<i;
                    vis[i]--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

