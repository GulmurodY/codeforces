#include <iostream>

using namespace std;

int main() {
    int k, n;
    cin >> n >> k;
    int max_joy = INT_MIN;
    for (int i = 1; i <= n; i++) {
        int f, t;
        cin >> f >> t;
        int cur_joy = f;
        if (t > k) {
            cur_joy -= (t - k);
        }
        max_joy = max(cur_joy, max_joy);
    }

    cout << max_joy;
    return 0;
}