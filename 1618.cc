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


int get(ll n, int a) {
    int count = 0;
    ll denom = a;
    while (n >= denom) {
        count += n / denom;
        denom *= a;
    }
    return count;
}

int main() {
    #ifndef LOCAL
      nfs();
    #endif

    ll n;
    cin >> n;

    int fives = get(n, 5);
    int twos = get(n, 2);
    cout << min(fives, twos) << '\n';
}

