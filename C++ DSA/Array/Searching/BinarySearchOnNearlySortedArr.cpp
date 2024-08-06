#include<iostream>
#include<vector>

using namespace std;
int binarySearch(vector<int>arr,int target){
    int s =0;
    int e =arr.size()-1;
    
    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]==target){
            return mid;
        }
        if(mid-1> 0 && arr[mid-1]==target){
            return mid -1;
        }
        if(mid<arr.size() -1 &&arr[mid+1]==target){
            return mid +1;
        }
        
        if (target > arr[mid]){
            s =mid +2;
        }
        if(target< arr[mid]){
            e =mid -2;
        }
    }
    return -1;
}

int main(){
    vector<int>arr {10,3,40,20,50,80,70};
    int target;
    cout<<"Enter the element to search"<<endl;
    cin >> target;
    int ans = binarySearch(arr ,target);
    cout<<"The element "<<target<<" is on index "<<ans;

    return 0;
}