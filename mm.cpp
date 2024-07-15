#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSteps(int n) {
    if (n == 1)
        return 0;
    
    vector<int> dp(n + 1, 0);
    
    for (int i = 2; i <= n; i++) {
        dp[i] = 1 + dp[i - 1];
        if (i % 2 == 0)
            dp[i] = min(dp[i], 1 + dp[i / 2]);
        if (i % 3 == 0)
            dp[i] = min(dp[i], 1 + dp[i / 3]);
    }
    
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    
    cout << minSteps(n) << endl;
    
    return 0;
}
