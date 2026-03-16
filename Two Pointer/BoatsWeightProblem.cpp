#include<bits/stdc++.h>
using  namespace std;
int NumberofBoat(vector<int>people,int limit){
     sort(people.begin(),people.end());
     int n=people.size();
     int i=0;
     int j=n-1;
     int boats=0;
     while(i<=j){
          if(people[i]+people[j]<=limit){
             i++;
          }
          j--;
          boats++;
     }
     return boats;
}
int main(){
   vector<int>people={1,3,2,2};
   int boats=NumberofBoat(people,3);

   cout<<"No Of Boats:"<<boats;
}