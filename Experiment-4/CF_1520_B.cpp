#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << -1 << endl;
            continue;
        }

        int total = n * n;

        // First print odd numbers
        for (int i = 1; i <= total; i += 2) {
            cout << i << " ";
        }

        // Then print even numbers
        for (int i = 2; i <= total; i += 2) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}