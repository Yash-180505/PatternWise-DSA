#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){

   sort(nums.begin(),nums.end());

   vector<vector<int>>ans;
   int n=nums.size();
   for(int i=0;i<n;i++){

      if(i>0 && nums[i]==nums[i-1]) continue;
      int l=i+1;
      int r=n-1;
      while(l<r){
           
          int sum=nums[i]+nums[l]+nums[r];
          if(sum==0){
             ans.push_back({nums[i],nums[l],nums[r]});

             while(l<r && nums[l]==nums[l+1]) l++;
             while(l<r && nums[r]==nums[r-1])r--;
             l++;
             r--;
          }
          else if(sum<0){
               l++;
          }
          else r--;
      }
   }
    return ans;   
}

int main(){

    vector<int> v1={-1,0,1,2,-1,-4};
    vector<int> v2={0,1,1};
    vector<int> v3={0,0,0};

    vector<vector<int>> ans=threeSum(v1);

    for(auto &v:ans){
        for(int x:v) cout<<x<<" ";
        cout<<endl;
    }

}