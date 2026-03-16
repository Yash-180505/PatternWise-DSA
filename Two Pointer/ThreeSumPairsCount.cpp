#include<bits/stdc++.h>
using namespace std;

int threeSumSmaller(vector<int>& nums, int target){

    sort(nums.begin(), nums.end());
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n - 2; i++){

        int l = i + 1;
        int r = n - 1;

        while(l < r){

            int sum = nums[i] + nums[l] + nums[r];

            if(sum < target){
                count += r - l;
                l++;
            }
            else{
                r--;
            }
        }
    }

    return count;
}

int main(){

    vector<int> nums = {-2,0,1,3};
    int target = 2;

    int result = threeSumSmaller(nums, target);

    cout << "Number of triplets with sum smaller than target: " << result;

    return 0;
}