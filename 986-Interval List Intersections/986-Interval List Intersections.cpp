class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int begin=0,end=0;
        int i=0,j=0;
        vector<vector<int>> res;
        while(i<A.size()&&j<B.size()){
            int begin = max(A[i][0],B[j][0]);
            int end = min(A[i][1],B[j][1]);
            if(begin<=end)
                res.push_back({begin,end});
            if(A[i][1]>=B[j][1])
                j++;
            else
                i++;
        }
        return res;
    }
};
