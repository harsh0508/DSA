#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int majority = nums[0];

    if(nums.size() == 1) return majority;

    for(int x = 0 ; x < nums.size() ; x++){

        if(count == 0){
            majority = nums[x];
        }
        if(nums[x] == majority) count ++;
        else count --;

       cout <<"majority is ::" << majority << endl;
       cout <<"currnet count is ::" << count << endl;
    }

    return majority;
}


int main(){

    vector<int>nums = {1000000000,1000000000,-1000000000,-1000000000,-1000000000};
    int major = majorityElement(nums);
    cout << "majority element is :" << major << endl;
    return 0;
}