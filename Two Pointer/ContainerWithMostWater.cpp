#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height){
  int maxArea=INT_MIN;

  int n=height.size();
  int left=0;
  int right=n-1;
  while(left<right){
      int h=min(height[left],height[right]);

      int width=right-left;

      int area=h*width;
       maxArea=max(area,maxArea);
       if(height[left]<height[right]) left++;
       else right--;
  }

  return maxArea;
}

int main(){

    vector<int> v1={1,8,6,2,5,4,8,3,7};
    vector<int> v2={1,1};
    vector<int> v3={4,3,2,1,4};

    cout<<maxArea(v1)<<endl;
    cout<<maxArea(v2)<<endl;
    cout<<maxArea(v3)<<endl;

}