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
const ll MODD = 1e9;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

using namespace std;

int main() {
    int n;
    cin >> n;
    int target = n * (n + 1) / 2;
    if (target % 2) {
        cout << 0 << endl;
        return 0;
    }
    target /= 2;

    vector<vector<int>> dp(n, vector<int>(target + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= target; j++) {
            dp[i][j] = dp[i - 1][j];
            int left = j - i;
            if (left >= 0) {
                (dp[i][j] += dp[i - 1][left]) %= MODD;
            }
        }
    }
    cout << dp[n - 1][target] << endl;
}