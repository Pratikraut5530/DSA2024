#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void merge(vector<int> &nums1,int m,vector<int> &nums2,int n){
        int index1 = 0;
        int index2 = 0;
        int mainArrayIndex = 0;
        vector<int> copy;
        copy = nums1;

        while(index1 < m && index2 < n){
            if(copy[index1]<=nums2[index2]){
                nums1[mainArrayIndex]=copy[index1];
                index1++;
            }
            else{
                nums1[mainArrayIndex]=nums2[index2];
                index2++;
            }
            mainArrayIndex++;
        }

        while(index1 < m){
            nums1[mainArrayIndex]=copy[index1];
            mainArrayIndex++;
            index1++;
        }

        while(index2 < n){
            nums1[mainArrayIndex]=nums2[index2];
            mainArrayIndex++;
            index2++;
        }
    }

};

int main()
{
    vector<int> nums1{1,2,3,0,0,0};
    int m = nums1.size();
    vector<int> nums2{2,5,6};
    int n = nums2.size();

    merge(nums1,m,nums2,n);
    return 0;
}