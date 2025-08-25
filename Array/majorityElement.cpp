#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    short count = 1;
    short majority = nums[0];

    for(short x = 1 ; x < nums.size() ; x++){
        if(nums[x] == majority){
            // somethign using n/2
        }
    }

    return majority;
}


int main(){

    vector<int>nums = {2,2,1,1,1,2,2};
    majorityElement(nums);

    return 0;
}