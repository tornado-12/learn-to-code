/**
 *    author:  master_yash
 *    created: 2020-10-01 12:14:32
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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n), dp(x + 1);
    for (int i = 0; i < n; i++) cin >> a[i];
    dp[0] = 1;
    for (int c : a)
        for (int i = 1; i <= x; i++)
            if (i - c >= 0)
                dp[i] = (dp[i] + dp[i - c]) % 1000000007;
    cout << dp[x] << "\n";
}