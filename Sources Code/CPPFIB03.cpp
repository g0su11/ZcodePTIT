//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    int fibo[20] = {0, 1, 2, 3, 5 , 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987};
    while(test--){
        int a[105];
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for( int i = 0; i < n; ++i){
            for (int j = 0; j < 16; ++j) {
                if( a[i] == fibo[j] ){
                    cout << a[i] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
