#include<bits/stdc++.h>
using namespace std;
int TrappingWater(vector<int>&heights){
     int n=heights.size();
     int left=0;
     int right=n-1;

     int leftMax=0;
     int rightMax=0;
     int water=0;
   while(left<right){
      if(heights[left]<heights[right]){
          if(heights[left]>=leftMax){
            leftMax=heights[left];
          }
          else{
                water+=leftMax-heights[left];
          }
          left++;
      }
      else{
         if(heights[right]>=rightMax){
            rightMax=heights[right];
          }
          else{
                water+=rightMax-heights[right];
          }
          right--;
         
      }
   }

   return water;
}

int main(){

  vector<int>heights={4,2,0,3,2,5};
  int water=TrappingWater(heights);

  cout<<"Trapping Water:"<<water;

}