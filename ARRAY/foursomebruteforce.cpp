// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

//https://www.interviewkickstart.com/problems/4sum

vector<vector<int>> four_sum(vector<int> &arr,int target){
    vector<vector<int>> result;
    int n = arr.size();

    sort(arr.begin(),sort.end());

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }

        for(int j=i+1;i<n;i++){
            if(j>i+1 && arr[j]==arr[j-1]){
                continue;
            }

            for(int k=j+1;k<n;k++){
                if(k>j+1 && arr[k]==arr[k-1]){
                    continue;
                }

                for(int l=k+1;l<n;l++){
                    if(l>k+1 && arr[l]==arr[l-1]){
                        continue;
                    }

                    //condition
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        result.push_back({arr[i],arr[j],arr[k],arr[l]});
                    }
                }
            }
        }

    }



}

int main()
{
    cout<<"hji";
    return 0;
}