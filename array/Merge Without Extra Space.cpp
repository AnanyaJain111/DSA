class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    vector<int>mp;
        for(int i=0;i<n;i++){
            mp.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++){
            mp.push_back(arr2[i]);
        }
        sort(mp.begin(),mp.end());
        int k=0;
        for(int i=0;i<n;i++){
            arr1[i]=mp[k];
            k++;
        }
        for(int i=0;i<m;i++){
            arr2[i]=mp[k];
            k++;
        }
	}
};
