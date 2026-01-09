// n = moves
// x = add candy
// n - x = eat candy
// k = result
//
// Equation:
//     x(1 + x) / 2 - n + x = k
//     x^2 + x - 2n + 2x = 2k
//     x^2 + 3x = 2n + 2k
//
// Now lets use iterate through the possible x and find the one which matches the equation.


#include<iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int x = 0; x <= n; x++) {
        long long left = x * x + 3 * x;
        long long right = 2 * n + 2 * k;
        if (left == right) {
            cout << n - x;
            return 0;
        }
    }
    return 0;
}