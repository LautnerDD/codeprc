class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>> mid;
        vector<int> res;
        unordered_map<int,int> times;
        int len = nums.size(),begin = 0,end = 0,ant=0,minnum=INT_MAX;
        for(int i = 0;i < len;i++){
            for(int num:nums[i]){
                mid.push_back({num,i});
            }
        }
        sort(mid.begin(),mid.end());
        while(end<mid.size()){
            if(times[mid[end].second]==0)
                ant++;
            times[mid[end].second]++;
            while(ant == len && begin<=end){
                if(minnum>mid[end].first-mid[begin].first){
                    minnum = mid[end].first - mid[begin].first;
                    res = {mid[begin].first,mid[end].first};
                }
                if(times[mid[begin].second]==1)
                    ant--;
                times[mid[begin].second]--;
                begin++;
                // if(--times[mid[begin].second] == 0)
                //     ant--;
                // begin++;
            }
            end++;
        }
        return res;
    }
};
