class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};
        vector<int> res;
        int m = matrix.size();
		int n = matrix[0].size();
		int max = m > n?(n+1)/2:(m+1)/2;
		int i,j;
		for(i = 0;i < max;i++){
            for(j = i;j < n-i;j++)
                res.push_back(matrix[i][j]);
            if(i+1>=m-i) break;
            for(j = i+1;j < m-i;j++)
                res.push_back(matrix[j][n-i-1]);
            for(j = n-i-1-1;j>=i;j--)
                res.push_back(matrix[m-i-1][j]);
            if(n-i-2<i)break;
            for(j = m-i-1-1;j>i;j--)
                res.push_back(matrix[j][i]);
        }
        return res;
    }
};