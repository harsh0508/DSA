#include<array>
#include<iostream>
#include<vector>
#include <unordered_set>
#include <unordered_map>


using namespace std;


// easy hash-map question array if in any order (can be done via sorting and two pointer for no extra space)
vector<int> twoSum(const vector<int>& nums, int target){

    int lastPtr = nums.size();
    unordered_map<int,int> s ;

    if(lastPtr <= 1){
        return {0,0};
    }
    
    for(int x = 0 ; x<=lastPtr-1 ; x++){

        int diffrence = target - nums[x];

        if(s.find(diffrence) != s.end()){
            return {s[diffrence], x};
        }
        else{
            s[nums[x]] = x;
        };
    }
    return {0, 0};
}


int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> targets = twoSum(nums,target);
    printf("%d , %d",targets[0],targets[1]);
    return 0;

}