#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        int ans = 1;
        int last_a = a & 1;
        int last_b = b & 1;
        while(last_a == last_b) {
            ans *= 2;
            a = a / 2;
            b = b / 2;
            last_a = a & 1;
            last_b = b & 1;
        }
        cout << ans << endl;
    }
}
