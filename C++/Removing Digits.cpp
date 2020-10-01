/**
 *    author:  tourist1256
 *    created: 2020-10-01 12:15:27
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
#define scanv(v)         \
    for (auto &it : v) { \
        cin >> it        \
    }
#define print(v)           \
    for (auto &it : v) {   \
        cout << it << " "; \
    }
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

ll max_digit(ll n) {
    vll v;
    while (n) {
        v.pb(n % 10);
        n /= 10;
    }
    sort(v.rbegin(), v.rend());
    return v[0];
}

void solve() {
    ll n, ans = 0;
    cin >> n;
    while (n) {
        n -= max_digit(n);
        ans++;
    }
    cout << ans;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}