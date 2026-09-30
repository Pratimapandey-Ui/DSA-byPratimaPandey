// recursuin: t.c.-->O(2^N)
//TC->O(n)

int f(int n) {
    vector<int> dp(n + 1, 0);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

//ABOVE IS TABULATION CODE
//S.C.- O(n)




int f(int n) {
    vector<int> dp(n + 1);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

//space complexity:O(1)====>SPACE OPTIMIZATION

