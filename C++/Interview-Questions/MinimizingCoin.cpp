/**
 *    author:  master_yash
 *    created: 2020-10-01 12:11:57
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
typedef pair<ll, ll> pl;
const ll MAX = 1e5;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

int minCoins(int coins[], int m, int V) {
    int table[V + 1];
    table[0] = 0;
    for (int i = 1; i <= V; i++)
        table[i] = INT_MAX;
    for (int i = 1; i <= V; i++) {
        for (int j = 0; j < m; j++)
            if (coins[j] <= i) {
                int sub_res = table[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
    }
    if (table[V] == INT_MAX) {
        return -1;
    }
    return table[V];
}

int32_t main() {
    int x, n;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    cout << minCoins(coins, n, x);
    return 0;
}