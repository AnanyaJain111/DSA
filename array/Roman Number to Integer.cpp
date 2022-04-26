/*https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1/?page=1&difficulty[]=0&status[]=unsolved&company[]=Zoho&sortBy=submissions#*/

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int sum=0;
        for(int i=0;i<str.size()-1;i++){
            int a=checkval(str[i]);
            int b=checkval(str[i+1]);
            if(a>=b){
                sum=sum+a;  //xix---11+10-1
            }
            else{
                sum=sum-a;      //ixx
            }
        }
        sum=sum+checkval(str[str.size()-1]);
        return sum;
    }
    int checkval(char str){
        if(str=='I'){
            return 1;
        }
        else if(str=='V'){
            return 5;
        }
        else if(str=='X'){
            return 10;
        }
        else if(str=='L'){
            return 50;
        }
        else if(str=='C'){
            return 100;
        }
        else if(str=='D'){
            return 500;
        }
        else if(str=='M'){
            return 1000;
        }
        return -1;
    }
};
