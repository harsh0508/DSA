#include<vector>
#include<iostream>

using namespace std;

void printVector(vector<int>& vec){
    for(size_t i= 0 ; i < vec.size(); i++){
        printf("%d",vec[i]);
    }
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {    
    vector<int> result = {};
    int pointer1 = 0;
    int pointer2 = 0;

    while(pointer1 < m && pointer2 < n){
        // set and exit rule

        if(nums1[pointer1] > nums2[pointer2]){
            result.push_back(nums2[pointer2]);
            pointer2 += 1;
        }
        else{
            result.push_back(nums1[pointer1]);
            pointer1 += 1;
        }
    }
    if(m>n){
        for(pointer1 ; pointer1 < m ; pointer1++){
                result.push_back(nums1[pointer1]);
        }
    }else if(n>m){
        for(pointer2 ; pointer2 < n ; pointer2 ++){
                result.push_back(nums2[pointer2]);
        }
    }
    nums1 = result;

};


int main(){

    vector<int> nums1 = {0};
    int m =0; // 0 is not considered
    vector<int> nums2 = {1};
    int n = 1;
    merge(nums1 , m , nums2 , n);
    // expected output --> [1,2,2,3,5,6]
    return 0;
};