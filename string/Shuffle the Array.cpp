class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        int j=n;
        for(int i=0;(i<n && j<2*n);i++){
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            j++;
        }
        return v;
    }
};
