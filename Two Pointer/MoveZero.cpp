#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){

  
    int n=nums.size();

  int slow=0;
  
  
  for(int fast=0;fast<n;fast++){
        if(nums[fast]==0) continue;
        else{
              swap(nums[slow++],nums[fast]);
        }
  }
}

int main(){

    vector<int> v1 = {0,1,0,3,12};
    vector<int> v2 = {0,0,1};
    vector<int> v3 = {4,2,4,0,0,3,0,5,1,0};

    moveZeroes(v1);
    moveZeroes(v2);
    moveZeroes(v3);

    for(int x:v1) cout<<x<<" ";
    cout<<endl;

    for(int x:v2) cout<<x<<" ";
    cout<<endl;

    for(int x:v3) cout<<x<<" ";
    cout<<endl;
}