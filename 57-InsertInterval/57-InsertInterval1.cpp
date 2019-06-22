class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        bool inserted=false;
        vector<vector<int>> res;
        for(auto& v:intervals){
            if(v.back()<newInterval.front())
                res.push_back(v);
            else if(v.front()>newInterval.back()){
                if(!inserted){
                    res.push_back(newInterval);
                    inserted=true;
                }
                res.push_back(v);
            }
            else{
                newInterval.front()=min(newInterval.front(),v.front());
                newInterval.back()=max(newInterval.back(),v.back());
            }
        }
        if(!inserted){
            res.push_back(newInterval);
        }
        return res;
    }
};
