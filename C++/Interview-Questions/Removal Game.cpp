/**
 *    author:  tourist1256
 *    created: 2020-10-01 12:18:28
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
    int n;
    cin >> n;
    vector<int> x(n);
    long long sum = 0;
    for (int& v : x) {
        cin >> v;
        sum += v;
    }
    vector<vector<long long>> dp(n, vector<long long>(n));
    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r) {
                dp[l][r] = x[l];
            } else {
                dp[l][r] = max(x[l] - dp[l + 1][r],
                               x[r] - dp[l][r - 1]);
            }
        }
    }
    cout << (sum + dp[0][n - 1]) / 2 << endl;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}