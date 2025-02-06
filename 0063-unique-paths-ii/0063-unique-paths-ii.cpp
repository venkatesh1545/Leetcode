class Solution {
public:
    int rec(int i, int j, vector<vector<int>> obstacleGrid, vector<vector<int>> &dp) {
        
        if(i < 0 || j < 0) return 0;
        if(obstacleGrid[i][j] == 1) return 0;
        // if(obstacleGrid[i][j] == 0) return 1;
        if(i == 0 && j == 0) return 1;
        if(dp[i][j]!= -1) return dp[i][j];
        int path1 = rec(i-1, j, obstacleGrid, dp);
        int path2 = rec(i, j-1, obstacleGrid, dp);
        return dp[i][j] = path1+path2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return rec(n-1, m-1 , obstacleGrid, dp);

    }
};