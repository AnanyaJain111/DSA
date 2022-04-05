class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=0;
        int maxarea=0;
        vector<int>v;
        int i=0;
        while(l<r){
            int w=r-l;
            int h= min(height[l],height[r]);
            area=w*h;
            maxarea=max(area,maxarea);
            if(height[l]<height[r]){
                l++;
            }
            else if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
                r--;
            }
            
        }
        return maxarea;
    }
};
