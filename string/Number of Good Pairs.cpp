int count=0;
       int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
             count+=mp[nums[i]];  //0+1+2+1
             mp[nums[i]]++; //3--1--2
        }
        return count;
