#include<array>
#include<iostream>
#include<vector>


using namespace std;


// easy 2 pointer question array if in acending order
vector<int> twoSum(const vector<int>& nums, int target){

    int initialPtr = 0;
    int lastPtr = nums.size();

    if(lastPtr <= 1){
        return {0,0};
    }
    
    while(initialPtr < lastPtr){
        if(nums[initialPtr] + nums[lastPtr-1] > target){
            lastPtr -= 1;
        }
        else if(nums[initialPtr] + nums[lastPtr-1] > target){
            initialPtr += 1;
        }
        else{
            return {initialPtr , lastPtr-1};
        }
    };

    return {0, 0};
}


int main() {

    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> targets = twoSum(nums,target);
    printf("%d , %d",targets[0],targets[1]);
    return 0;

}