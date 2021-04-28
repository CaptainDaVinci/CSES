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

ll mulmod(int a, int b) {
    return (1LL * a * b) % MOD;
}

ll expmod(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b == 1) {
        return a;
    }
    
    if (b & 1) {
      return mulmod(a, expmod(a, b - 1));
    }

    ll cache = expmod(a, b >> 1);
    return mulmod(cache, cache); 
}

int main() {
    #ifndef LOCAL
      nfs();
    #endif

    int n;
    cin >> n;

    cout << expmod(2, n) << '\n';
}

