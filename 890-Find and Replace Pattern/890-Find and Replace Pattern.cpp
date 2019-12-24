class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for(string word:words){
            unordered_map<char,char> order,unorder;
            int i =0;
            for(;i<word.length();i++){
                if(order.count(word[i])&&order[word[i]]!=pattern[i])
                    break;
                order[word[i]] = pattern[i];
                if(unorder.count(pattern[i])&&unorder[pattern[i]]!=word[i])
                    break;
                unorder[pattern[i]] = word[i];
            }
            if(i == word.length())
                res.push_back(word);
        }
        return res;
    }
};
