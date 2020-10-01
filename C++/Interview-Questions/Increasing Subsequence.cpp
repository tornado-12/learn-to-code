/**
 *    author :  tourist1256
 *    created: 2020-10-01 12:21:12
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
    int n;
    cin >> n;
    vector<int> dp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if (it == dp.end()) {
            dp.push_back(x);
            // cout << "if :" << x << endl;
        } else {
            // cout << "else : " << dp[it - dp.begin()] << " ";
            *it = x;
            // cout << "else : " << x << endl;
        }
    }
    // for (auto &it : dp) {
    //     cout << it << " ";
    // }
    // cout << endl;
    cout << dp.size() << endl;
}
