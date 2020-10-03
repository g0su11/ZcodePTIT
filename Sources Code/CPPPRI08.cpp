//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    for (int j = 0; j < test; ++j) {
        int n, p, count = 0;
        cin >> n >> p;
        for (int i = 2; i <= n; i++) {
            int k = i;
            while (1) {
                if(k % p == 0 ){
                    count++;
                }else break;
                k/=p;
            }
        }
        cout << count << endl;
    }
    return 0;
}
