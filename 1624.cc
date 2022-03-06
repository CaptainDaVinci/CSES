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


vector<bool> col(8, false);
vector<bool> d1(16, false);
vector<bool> d2(16, false);

int solve(vector<string> &board, int row) {
    if (row == board.size()) {
        return 1;
    }

    int ans = 0;
    for (int i = 0; i < board.size(); ++i) {
        if (col[i] || d1[row + i] || d2[row - i + (board.size() - 1)] || board[row][i] == '*') continue;
        col[i] = d1[row + i] = d2[row - i + (board.size() - 1)] = true;
        ans += solve(board, row + 1);
        col[i] = d1[row + i] = d2[row - i + (board.size() - 1)] = false;
    }
    return ans;
}

int main() {
    #ifndef LOCAL
      nfs();
    #endif


    vector<string> board(8);
    for (auto &x : board) {
        cin >> x;
    }

    cout << solve(board, 0) << '\n';
}

