#include<bits/stdc++.h>
// #include<iostream>
#include<vector>
using namespace std;

//brute force
int majorityElement1(vector<int> &nums){
    int n = nums.size();

    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]==nums[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            return nums[i];
        }
    }

    return -1;
}

//map approach
int majorityElement2(vector<int> &nums){
    map<int,int> mpp;

}

int main()
{
    vector<int> nums{2,2,1,1,1,2,2};
    cout<<"Majority of element in the array is : "<<majorityElement1(nums)<<endl;
    return 0;
}