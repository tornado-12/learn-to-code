/**
 *    author:  tourist1256
 *    created: 2020-05-21 01:39:46
**/

/**
 *    author:  tourist1256
 *    created: 2020-10-01 12:16:43
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
typedef vector<ll> vll;
typedef vector<vector<ll>> mat;
typedef pair<ll, ll> pl;
const ll MAX = 1e5;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

void solve() {
    ll n, x;
    cin >> n >> x;
    vll price(n), pages(n);
    for (auto &it : price) {
        cin >> it;
    }
    for (auto &it : pages) {
        cin >> it;
    }
    vll dp(x + 1);
    for (int i = 0; i < n; i++)
        for (int j = x; j >= 1; j--)
            if (price[i] <= j)
                dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
    cout << dp[x] << endl;
    // mat dp(n + 1, vll(x + 1));
    // forn(n + 1) {
    //     dp[i][0] = 0;
    // }
    // forn(x + 1) {
    //     dp[0][i] = 0;
    // }
    // forkn(i, 1, n + 1) {
    //     forkn(j, 1, x + 1) {
    //         if (j >= price[i - 1]) {
    //             dp[i][j] = max(pages[i - 1] + dp[i - 1][j - price[i - 1]], dp[i - 1][j]);
    //         } else {
    //             dp[i][j] = dp[i - 1][j];
    //         }
    //     }
    // }
    // cout << dp[n][x] << endl;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}