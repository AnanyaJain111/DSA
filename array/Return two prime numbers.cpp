class Solution{
public:
    vector<int> primeDivision(int N){
        // code here
        vector<int> prime(N+1 , 1);
       prime[0] = prime[1] = 0;
       
       for(int  i =  2 ; i <= sqrt(N) ;i++ )
       {
           for(int  j = 2 ; j*i < N ; j++ )
           {
               prime[i*j] = 0;
           }
       }
       
       for(int i = 2 ; i <= N ; i++)
       {
           if(prime[i] == 1 && prime[N-i] == 1 )
           {
               return {i , N-i};
           }
       }
    }
};
