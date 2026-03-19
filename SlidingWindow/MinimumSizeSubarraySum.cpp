#include<bits/stdc++.h>
using namespace std;
 int minSubArrayLen(int target, vector<int>& nums) {
        

    int left=0;
    int sum=0;
    int len=INT_MAX;
    for(int right=0;right<nums.size();right++){
     
              sum+=nums[right];
   
        while(sum>=target){
         
             len=min(len,right-left+1);
              sum-=nums[left];
              left++;
           }
             
           
           
        
    }
    if(len==INT_MAX){
          return 0;
    }
return  len;
        
    }
int main(){
   vector<int>nums={2,3,1,2,4,3};
   int target=7;

   int ans=minSubArrayLen(target,nums);
   cout<<ans;
}