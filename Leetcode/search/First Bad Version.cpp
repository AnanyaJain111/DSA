class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1;
        long long r=n;
        int mid;
        while(l<r){
            mid=(l+r)/2;
            if(isBadVersion(mid)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }return l;
    }
};
