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

string bitrep(int num, int n) {
    string res;
    for (int i = n - 1; i >= 0; --i) {
        res.append(1, (num & (1 << i)) ? '1' : '0');
    }
    return res;
}

int main() {
    #ifndef LOCAL
      nfs();
    #endif

    int n;
    cin >> n;

    set<int> table[n + 1][n + 1];
    for (int i = 0; i < (1 << n); ++i) {
        int o = __builtin_popcount(i);
        int z = n - o;
        table[o][z].insert(i);
    }

    vector<string> ans;
    int num = 0;
    ans.push_back(bitrep(num, n));
    table[0][n].erase(0);
    int o = 0, z = n, no = 1, nz = -1;
    while (ans.size() != (1 << n)) {
        if (o == n) {
            no = -1;
            nz = 1;
        } else if (z == n) {
            no = 1;
            nz = -1;
        }
        o += no, z += nz;
        cout << o << ' ' << z << '\n';
        bool found = false;
        for (int x : table[o][z]) {
            int hamming_dist = __builtin_popcount(x ^ num);
            if (hamming_dist == 1) {
                found = true;
                table[o][z].erase(x);
                ans.push_back(bitrep(x, n));
                num = x;
                break;
            }
        }
    }

    for (string s : ans) {
        cout << s << '\n';
    }
}

