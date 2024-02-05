#include<iostream>
#include<vector>

using namespace std;

int greatestElement(vector<int> &arr){
    int n = arr.size();
    int greatestelement=0;

    for(int i=0;i<n;i++){
        if(arr[i]>greatestelement){
            greatestelement = arr[i];
        }
    }

    return greatestelement;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int ans = greatestElement(arr);
    cout<<"Greatest Element is : "<<ans<<endl; 

    return 0;
}