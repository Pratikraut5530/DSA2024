#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums){
    int i=0;

    for(auto j:nums){
        if(i==0 || i==1 || nums[i-2]!=j){
            nums[i]=j;
            i++;
        }
    }
    return i;
}

int main()
{
    vector<int> nums{0,0,1,1,1,2,2,3};
    cout<<"value of k is : "<<removeDuplicates(nums)<<endl;
    return 0;
}