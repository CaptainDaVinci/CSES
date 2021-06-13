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

   int freq[26] = {};
   for (char c: s) {
       ++freq[c - 'A'];
   }

   int odds = count_if(freq, freq + 26, [](int x) { return x % 2; });
   if (odds > 1) {
       cout << "NO SOLUTION\n";
       return 0;
   }

   string ans(s.size(), '0');
   int j = 0;
   for (int i = 0; i < 26; ++i) {
      if (freq[i] % 2) {
          ans[s.size() >> 1] = 'A' + i;
          --freq[i];
      }
      for (int k = 0; k < freq[i] >> 1; ++k) {
          ans[j] = 'A' + i;
          ans[s.size() - j - 1] = 'A' + i;
          ++j;
      }
   }
   cout << ans << '\n';
}

