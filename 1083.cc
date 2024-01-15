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

    ll sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << (n * (n + 1LL)) / 2 - sum << '\n';
}

