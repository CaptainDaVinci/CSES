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

    vector<int> p(n);
    for (int &i : p) cin >> i;
    ll sum = accumulate(p.begin(), p.end(), 0LL);
    ll ans = INF;
    for (int i = 0; i < (1 << n); ++i) {
        ll csum = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                csum += p[j];
            }
        }
        ans = min(ans, abs(sum - 2 * csum));
    }
    cout << ans << '\n';
}

