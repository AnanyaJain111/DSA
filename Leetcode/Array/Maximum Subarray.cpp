class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int maxS=INT_MIN;
        int curS=0;
        for(int i=0;i<nums.size();i++){
            curS= max(curS+nums[i],nums[i]);
            maxS=max(curS,maxS);
            //if(curS<0){
            //    curS=0;
            //}
        }
        return maxS;
    }
};
