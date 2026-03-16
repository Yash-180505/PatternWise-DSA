#include<bits/stdc++.h>
using namespace std;



void SortColor(vector<int>&arr){
       int left=0;
       int n=arr.size();
       int right=n-1;
       int mid=0;

       while(mid<=right){
         if(arr[mid]==0){
               swap(arr[mid],arr[left]);
               left++;
               mid++;
         }
         else if(arr[mid]==1){
              mid++;
         }

         else{
              swap(arr[mid],arr[right]);
              right--;
         }
       }
}
int main(){
   vector<int>arr={0,1,2,0,2,1,0,0,2,1};
   cout<<"Before Sort Color:"<<endl;
   for(int x: arr){
      cout<<x<<" ";
   }

   cout<<endl;
    cout<<"After Sort Color:"<<endl;
    SortColor(arr);
   for(int x: arr){
      cout<<x<<" ";
   }

}