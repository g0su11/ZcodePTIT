//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>

using namespace std;

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int a;
        long long b;
        cin >> a >> b;
        long long sum = 0;
        for (int i = 1; i <= a ; i++) {
            sum += i % b;
        }
        cout << sum << "\n";
    }
    return 0;
}
