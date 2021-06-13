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

void solve(int n, int s, int a, int d) {
    if (n == 0) return;

    solve(n - 1, s, d, a);
    cout << s << ' ' << d << '\n'; 
    solve(n - 1, a, s, d);
}

int main() {
    #ifndef LOCAL
      nfs();
    #endif

    int n;
    cin >> n;

    cout << (1 << n) - 1 << '\n';
    solve(n, 1, 2, 3);
}

