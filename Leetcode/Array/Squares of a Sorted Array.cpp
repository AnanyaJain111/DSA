class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int sq;
        for(int i=0;i<nums.size();i++){
            sq=nums[i]*nums[i];
            v.push_back(sq);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
