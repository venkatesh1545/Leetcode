class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        INF = float('inf')
        dp = [INF] * (amount + 1)

        # dp = [0, inf, inf, inf, inf, inf, inf, inf, inf, inf, inf, inf]
        dp[0] = 0
        for coin in coins:
            for i in range(coin, amount + 1): #(1, 12) , (2, 12), (5, 12)
                dp[i] = min(dp[i], dp[i-coin] + 1)

        return dp[amount] if dp[amount] != INF else -1

    


        
