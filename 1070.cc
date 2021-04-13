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

    int n;
    cin >> n;

    if (n < 5) {
        if (n == 1) {
            cout << n << '\n';
        } else if (n == 4) {
            cout <<  "2 4 1 3\n";
        } else {
            cout << "NO SOLUTION\n";
        }
        return 0;
    }

    for (int i = 1; i <= n; i += 2) {
        cout <<  i << ' ';
    }
    for (int i = 2; i <= n; i += 2) {
        cout <<  i << ' ';
    }
    cout << '\n';
}

