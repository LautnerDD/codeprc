class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if(s.empty()||words.empty()) return {};
        int n = words.size(),len = words[0].size();
        int sum = s.size(),j;
        vector<int> res;
        unordered_map<string,int> final;
        for(auto&word : words) final[word]++;
        for(int i=0;i<=sum-n*len;i++){
            unordered_map<string,int> exchange;
            for(j=0;j<n;j++){
                string change = s.substr(i+j*len,len);
                if(final.find(change)==final.end()) break;
                exchange[change]++;
                if(exchange[change]>final[change])break;
            }
            if(j==n)res.push_back(i);
        }
        return res;
        
    }
};
