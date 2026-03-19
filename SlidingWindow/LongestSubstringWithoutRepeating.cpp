#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
       
    
     unordered_map<char,int>mp;
     int n=s.size();
     int left=0;
     int ans=0;
     for(int right=0;right<n;right++){
         mp[s[right]]++;

         while(mp[s[right]]>1){
              mp[s[left]]--;
              left++;
         }

         ans=max(ans,right-left+1);
     }
     return ans;
    }
int main(){
    string s1="abcabcbb";
    string s2 = "bbbbb";
   string s3 = "pwwkew";
    int ans1=lengthOfLongestSubstring(s1);
        int ans2=lengthOfLongestSubstring(s2);

            int ans3=lengthOfLongestSubstring(s3);
    cout<<ans1<<endl;
       cout<<ans2<<endl;

          cout<<ans3<<endl;
}