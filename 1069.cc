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

    string s;
    cin >> s;
    
    int res = 1;
    for (int i = 0; i < s.size();) {
        int j = i + 1;
        while (s[j] == s[i]) {
            ++j;
        }
        res = max(res, j - i);
        i = j;
    }
    cout << res << '\n';
}

