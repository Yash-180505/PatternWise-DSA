#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
int slow=0;
 for(int fast=1;fast<nums.size();fast++){
       if(nums[fast]==nums[fast-1]){
          fast++;
       }
       else{
        
          nums[++slow]=nums[fast];
       }
 }

   return slow+1;
}

int main(){

    vector<int> v1 = {1,1,2};
    vector<int> v2 = {0,0,1,1,1,2,2,3,3,4};
    vector<int> v3 = {1,1,1,1};
    vector<int> v4 = {1,2,3,4};

    cout<<removeDuplicates(v1)<<endl;
    cout<<removeDuplicates(v2)<<endl;
    cout<<removeDuplicates(v3)<<endl;
    cout<<removeDuplicates(v4)<<endl;

}