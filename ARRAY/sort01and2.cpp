#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int countzero=0;
    int countone=0;
    int counttwo=0;
    //counting number of zero,ones and two's in the array
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countzero++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            countone++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            counttwo++;
        }
    }

    //in place 
    for(int i=0;i<n;i++){
        if(i<countzero){
            arr[i]=0;
        }
        if(i<countzero+countone && i>=countzero){
            arr[i]=1;
        }
        if(i>=countzero+countone){
            arr[i]=2;
        }
    }
}

//dutch national flag algo
void sortduntfl(vector<int> &arr,int n){
    int low =0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr{2,2,2,2,0,0,1,0};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sortArray(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}