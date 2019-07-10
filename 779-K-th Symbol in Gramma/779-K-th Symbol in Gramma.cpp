class Solution {
public:
    int kthGrammar(int N, int K) {
        if(K==1)return 0;
        else if(K==2) return 1;
        if(K%2==1)
            return kthGrammar(N,(K+1)/2);
        else
            return 1-kthGrammar(N,(K/2));
    }
    
};