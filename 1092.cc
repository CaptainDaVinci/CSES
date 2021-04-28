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

    ll s = (n * (n + 1LL)) >> 1;
    if (s & 1) {
        cout << "NO\n";
        return 0;
    }

    ll target = s >> 1, cs = 0;
    vector<bool> vals(n, false);
    for (int i = n - 1; i >= 0; --i) {
        if (cs + i + 1 <= target) {
            vals[i] = 1;
            cs += i + 1;
        }
    }
    int set1_sz = count_if(vals.begin(), vals.end(), [](bool y) { return y; });
    cout << "YES\n";
    cout << set1_sz << '\n';
    for (int i = 0; i < n; ++i) {
        if (vals[i]) {
            cout << i + 1 << ' ';
        }
    }
    cout << '\n';

    int set2_sz = n - set1_sz;
    cout << set2_sz << '\n';
    for (int i = 0; i < n; ++i) {
        if (!vals[i]) {
            cout << i + 1 << ' ';
        }
    }
    cout << '\n';
    
}

