//
// Created by Gulmurod Yorov on 03.01.2026.
//

#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int l = 0, r = s.length() - 1;
        string ans = "";
        for (int j = 0; j < n; j++) ans += '+';

        for (auto const c: s) {
            if (c == '0') {
                ans[r] = '-';
                r--;
            } else if (c == '1') {
                ans[l] = '-';
                l++;
            } else {
                ans[l] = '?';
                ans[r] = '?';
                l++;
                r--;
            }
        }
        cout << ans;

    }
}