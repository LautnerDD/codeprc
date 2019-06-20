class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = nums[0];
        for(int i=0;i<nums.size()&&reach>=i;i++)
            if(reach<i+nums[i])
                reach=i+nums[i];
        if(reach>=nums.size()-1)return true;
        else return false;
    }
};
