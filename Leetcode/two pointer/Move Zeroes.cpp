class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[p]=nums[i];
                p++; //3
            }
        }
        for(int i=p;i<nums.size();i++){
            nums[i]=0;
        }
        
    }
};
