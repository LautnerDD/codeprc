class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> res;
        int final=0;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                res[A[i]+B[j]]++;
            }
        }
        for(int i=0;i<C.size();i++){
            for(int j=0;j<D.size();j++){
                int result=-1*(C[i]+D[j]);
                final+=res[result];
                
            }
        }
        return final;
    }
};