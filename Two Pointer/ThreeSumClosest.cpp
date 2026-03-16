#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target){

    sort(nums.begin(), nums.end());

    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2];

    for(int i = 0; i < n - 2; i++){

        int l = i + 1;
        int r = n - 1;

        while(l < r){

            int sum = nums[i] + nums[l] + nums[r];

            if(abs(target - sum) < abs(target - closest)){
                closest = sum;
            }

            if(sum < target){
                l++;
            }
            else if(sum > target){
                r--;
            }
            else{
                return sum; 
        }
    }
   }

    return closest;
}

int main(){

    vector<int> nums = {-1,2,1,-4};
    int target = 1;

    int result = threeSumClosest(nums, target);

    cout << "Closest Sum: " << result;

    return 0;
}