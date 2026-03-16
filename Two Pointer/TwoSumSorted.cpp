#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSumSorted(vector<int>nums,int target){
      int n=nums.size();
      int l=0;
      int r=n-1;
      while(l<r){
          int sum=nums[l]+nums[r];
          if(sum==target){
               return {nums[l],nums[r]};
          }

          else if(sum<target) l++;
          else r--;
      }

      return {};
}
int main(){

    vector<int>v={2,3,4,7,9};
vector<int>ans=TwoSumSorted(v,9);

for(int x: ans){
      cout<<x<<" ";
}


}