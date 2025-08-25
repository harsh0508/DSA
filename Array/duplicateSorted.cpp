#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    short arrSize = 0;
    short k = 1;
    short i = 0;

    if(nums.empty()) return 0;
    while(k < nums.size()){
        if(nums[i] == nums[k]){
            k++;
        }
        else{
            i++;
            nums[i] = nums[k];
        }
    }
    for(short x =0 ; x < nums.size() ; x++){
        cout<<nums[x]<<endl;
    }
    return i+1;
};


int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(nums);
    return 0;
}