#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> nums){
    int k =1;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1] != nums[i]){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    return 0;
}