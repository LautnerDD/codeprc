class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> res;
        unordered_map<char,int> ans;
        int length = S.size();
        for(int i = 0;i < length;i++)
            ans[S[i]] = i;
        int judge = ans[S[0]],begin = 0;
        for(int i = 0;i < length;i++){
            if(ans[S[i]]>judge)
                judge=ans[S[i]];
            if(i == judge){
                res.push_back(i-begin+1);
                begin = i+1;
            }
                
            
        }
        return res;
        
    }
};