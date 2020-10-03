//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long temp=0;
        long long amMax=-10000005;
        long long Ai;
        long long S=0, S_tmp=0;
        long long ktd=0, kta=0;
        for (long long i=0; i<n; i++)
        {
            cin>>Ai;
            S_tmp+=Ai;
            if (S_tmp<0) S_tmp=0;
            else S = max(S, S_tmp);
            if (Ai >= 0)
            {
                temp+=Ai;
                ktd=1;
            }
            else
            {
                if (Ai > amMax) amMax = Ai;
                kta=1;
            }
        }
        if (ktd==0) cout << amMax << endl;
        else if (kta==0) cout << temp << endl;
        else cout << S << endl;
    }
}
