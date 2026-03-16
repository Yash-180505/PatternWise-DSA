#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){


    int n=s.size();
    int i=0;
    int j=n-1;

    while(i<j){
         while(i<j&& !isalnum(s[i])) i++;
         while(i<j &&!isalnum(s[j]))j--;

         if(tolower(s[i])!=tolower(s[j])) return false;

         
            i++;
            j--;
   
    }

    
      return true;

}

int main(){

    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = "madam";
    string s4 = "ab_a";
    string s5 = "0P";

    cout << isPalindrome(s1) << endl;
    cout << isPalindrome(s2) << endl;
    cout << isPalindrome(s3) << endl;
    cout << isPalindrome(s4) << endl;
    cout << isPalindrome(s5) << endl;

}