#include <bits/stdc++.h>

#define nfs()\
ios_base::sync_with_stdio(false);\
cin.tie(nullptr);

using namespace std;
using ll = long long;
using ull = long long;
using ld = long double;
constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

int main() {
    #ifndef LOCAL
      nfs();
    #endif

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        if ((a + b) % 3) {
            cout << "NO\n";
            continue;
        }

        int x = (2 * a - b);
        int y = (2 * b - a);
        if (x < 0 || x % 3) {
            cout << "NO\n";
            continue;
        }
        if (y < 0 || y % 3) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}

