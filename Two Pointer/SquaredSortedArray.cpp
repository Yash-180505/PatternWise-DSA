#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
     int n=nums.size();
    vector<int>ans(n);


   
    int low=0;
    int high=n-1;
    int i=n-1;
    while(low<high){
        if(abs(nums[low])<=abs(nums[high])){
        ans[i--]=nums[high]*nums[high];
          high--;
        }
        else{
              ans[i--]=nums[low]*nums[low];
              low++;
        }
    }
    ans[i]=nums[low]*nums[low];
    return ans;
}

int main(){

    vector<int> v1 = {-4,-1,0,3,10};
    vector<int> v2 = {-7,-3,2,3,11};
    vector<int> v3 = {-5,-3,-2,-1};

    vector<int> r1 = sortedSquares(v1);
    vector<int> r2 = sortedSquares(v2);
    vector<int> r3 = sortedSquares(v3);

    for(int x : r1) cout<<x<<" ";
    cout<<endl;

    for(int x : r2) cout<<x<<" ";
    cout<<endl;

    for(int x : r3) cout<<x<<" ";
    cout<<endl;
}