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

ll solve(ll x, ll y) {
    if (x == 1) {
        if (y & 1) {
            return y * y;
        }
        return (y - 1) * (y - 1) + 1;
    }
    if (y == 1) {
        if (!(x & 1)) {
            return x * x;
        }
        return (x - 1) * (x - 1) + 1;
    }

    if (x >= y) {
        if (!(x & 1)) {
            return x * x - (y - 1); 
        } 
        return (x - 1) * (x - 1) + y;
    } 
    if (y & 1) {
        return y * y - (x - 1); 
    } 
    return (y - 1) * (y - 1) + x;
}


int main() {
    #ifndef LOCAL
      nfs();
    #endif

    int t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;

        cout << solve(x, y) << '\n';
    }
}

