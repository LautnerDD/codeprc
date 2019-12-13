class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int begin=0,end=0,len=0;
        while(end<A.size()){
            if(K==0&&A[end]==0){
                len = max(len,end-begin);
                while(begin<=end&&A[begin]!=0)
                    begin++;
                begin++;
            }else if(A[end] == 0){
                K--;
            }
            end++;
        }
        len = max(len,end-begin);
        return len;
        
    }
};
