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

vector<string> res;

void generate(string cur_s, vector<int> &freq, int k) {
    if (cur_s.size() == k) {
        res.push_back(cur_s);
        return ;
    }

    for (int i = 0; i < freq.size(); ++i) {
        if (freq[i] == 0) continue;

        --freq[i];
        cur_s.push_back(i + 'a');
        generate(cur_s, freq, k); 
        cur_s.pop_back();
        ++freq[i];
    }
}

int main() {
    #ifndef LOCAL
      nfs();
    #endif

    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) {
        ++freq[c - 'a'];
    }

    generate("", freq, s.size());
    cout << res.size() << '\n';
    for (string a : res) {
        cout << a << '\n';
    }
}

