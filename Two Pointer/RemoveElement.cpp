#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val){
 int  n=nums.size();
 int slow=0;
 for(int fast=0;fast<n;fast++){
      if(nums[fast]==val) continue;

      else{
          swap(nums[slow++],nums[fast]);
      }
 }
 return slow;
}

int main(){

    vector<int> v1 = {3,2,2,3};
    vector<int> v2 = {0,1,2,2,3,0,4,2};

    cout<<removeElement(v1,3)<<endl;
    cout<<removeElement(v2,2)<<endl;

}