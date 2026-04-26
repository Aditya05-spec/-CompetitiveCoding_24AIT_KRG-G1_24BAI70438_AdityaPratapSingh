#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k = 0;
        while (k < n && a[k] == 1) {
            k++;
        }

        if (k == n) {
            if (k % 2 == 1) cout << "First\n";
            else cout << "Second\n";
        } else {
            // found a pile > 1
            if (k % 2 == 0) cout << "First\n";
            else cout << "Second\n";
        }
    }

    return 0;
}