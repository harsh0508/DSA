// use recurrsion here 

#include<iostream>
#include<vector>

using namespace std;

void rotateArray(vector<int>& nums , int in_idx , int last_idx){
        int temp = 0 ;
        while(in_idx < last_idx){
            temp = nums[in_idx];
            nums[in_idx] = nums[last_idx];
            nums[last_idx] = temp ;

            in_idx ++;
            last_idx --;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<= 1) return ;

        k = k%nums.size() ;
        if(k==0) return;
        rotateArray(nums , 0 ,nums.size()-1);

        rotateArray(nums , 0 , k-1 );

        rotateArray(nums, k , nums.size()-1);
    }

int main(){

    vector<int> nums = {-1};

    cout << nums.size() << endl;
    rotate(nums , 2);
    for(short x = 0 ; x < nums.size() ; x++){
        cout << nums[x] ;
    }
    cout<<endl;
    return 0;
}