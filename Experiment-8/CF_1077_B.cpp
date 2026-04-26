#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = 0;

    // Traverse from second to second-last element
    for (int i = 1; i < n - 1; i++) {
        // Check for pattern 1 0 1
        if (a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1) {
            k++;               // we perform one operation
            a[i + 1] = 0;      // turn off the right light
        }
    }

    cout << k << endl;

    return 0;
}