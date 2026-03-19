#include<bits/stdc++.h>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {

          double sum=0;
        
    double maxAvg=INT_MIN;
         int left=0;
         int count=0;
         for(int right=0;right<nums.size();right++){
             
                sum+=double(nums[right]);
                count++;

                if(count==k){
                      
                      maxAvg=max(maxAvg,sum);
                      sum-=double(nums[left]);
                      left++;
                      count--;
                }
         }

         return  double(maxAvg/k);

    }

double maxAvgerage(vector<int>nums,int k){
       int sum=0;
       for(int i=0;i<k;i++){
          sum+=nums[i];
       }
       int MaxSum=sum;

       for(int i=k;i<nums.size();i++){
          sum+=nums[i];
          sum-=nums[i-k];
          MaxSum=max(MaxSum,sum);
       }

       return double(MaxSum/k);
}
int main(){
  vector<int>nums={1,12,-5,-6,50,3};
  int k=4;
  double ans=findMaxAverage(nums,k);
  cout<<ans;


  double avg=maxAvgerage(nums,k);
  cout<<avg;
}