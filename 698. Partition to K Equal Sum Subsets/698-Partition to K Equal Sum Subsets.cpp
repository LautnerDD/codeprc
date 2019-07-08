class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int average=sum/k;
        if(sum%k)return false;
        sort(nums.begin(), nums.end(), greater<int>());
        //vector<bool> visit(nums.size(),false);
        vector<bool> visit(nums.size(), false);
        return di(nums,k,visit,0,average,0);
        }
    bool di(vector<int> nums,int k,vector<bool> visit,int nowsum,int average,int start){
        if(k==1)return true;
        if(nowsum==average) return di(nums,k-1,visit,0,average,0);
        if(nowsum>average) return false;
        for(int i=start;i<nums.size();i++){
            if(visit[i])continue;
            visit[i]=true;
            if(di(nums,k,visit,nowsum+nums[i],average,i+1))
                return true;
            visit[i]=false;
        }
        return false;
    }
        
        
    
};