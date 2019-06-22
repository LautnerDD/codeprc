class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        //if(intervals.empty()) return intervals;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res{intervals[0]};
        for(int i=1;i<intervals.size();i++){
            if(res.back()[1]<intervals[i][0])
                res.push_back(intervals[i]);
            else
                res.back()[1]=res.back()[1]>intervals[i][1]?res.back()[1]:intervals[i][1];
        }
        return res;
    }
};
