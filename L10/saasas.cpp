#include <bits/stdc++.h>


using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));

    // Initialize dp array for base case
    dp[1][1] = 1;

    // Calculate the number of ways
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            for (int k = 1; k < i; k++) {
                dp[i][j] = (dp[i][j] + (dp[k][j - 1] * dp[i - k][j - 1]) % MOD) % MOD;
            }
        }
    }

    // Calculate the total number of ways for "No Winner" competition
    long long totalWays = 0;
    for (int i = 1; i <= M; i++) {
        totalWays = (totalWays + dp[N][i]) % MOD;
    }

    cout << totalWays << endl;

    return 0;
}

