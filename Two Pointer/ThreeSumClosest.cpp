#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumClosest(vector<int>& nums,int target){

   sort(nums.begin(),nums.end());

   vector<vector<int>>ans;
   int n=nums.size();
   int closest=0;
   for(int i=0;i<n;i++){

     
      int l=i+1;
      int r=n-1;
      while(l<r){
           int sum=nums[i]+nums[l]+nums[r];
           int diff=abs(sum-target);
           if(closest<diff)
        
      }
   }
    return ans;   
}

int main(){


}