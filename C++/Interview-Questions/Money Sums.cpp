/**
 *    author:  tourist1256
 *    created: 2020-10-01 12:17:32
**/

#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;
#define quick                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#define time cout << (0.1 * clock()) / CLOCKS_PER_SEC << endl;
#define countBits(x) __builtin_popcount(ll(x))
#define countZeroesAtBegin(x) __builtin_clz(ll(x))
#define countZeroesAtEnd(x) __builtin_ctz(ll(x))
#define last(x) x[x.end() - x.begin() - 1]
#define pb push_back
#define bg begin
#define ff first
#define ss second
#define PI 3.14
#define mod 1000000007
typedef long long ll;
typedef vector<ll> vll1;
typedef vector<bool> vll;
typedef vector<vector<bool>> mat;
typedef pair<ll, ll> pl;
const ll MAX = 1e5;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

void solve() {
    ll n;
    cin >> n;
    vll1 num(n);
    for (auto &it : num) {
        cin >> it;
    }
    int sum = n * 1000;
    mat dp(n + 1, vll(sum + 1, false));
    dp[0][0] = true;
    forn(n + 1) {
        dp[i][0] = true;
    }
    forkn(i, 1, n + 1) {
        forkn(j, 1, sum + 1) {
            if (j >= num[i - 1] && dp[i - 1][j - num[i - 1]]) {
                dp[i][j] = true;
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    vll1 possible;
    for (int j = 1; j <= sum; j++) {
        if (dp[n][j]) {
            possible.push_back(j);
        }
    }
    cout << possible.size() << endl;
    for (int v : possible) {
        cout << v << ' ';
    }
    // cout << dp[sum][n];
}

int32_t main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}