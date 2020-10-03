//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        int arr[n+1], arr1[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            arr1[i] = abs(x-arr[i]);
        }
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++){
                if (arr1[j] > arr1[j+1]){
                    swap(arr[j], arr[j+1]);
                    swap(arr1[j], arr1[j+1]);
                }
            }
        }
        for(int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
