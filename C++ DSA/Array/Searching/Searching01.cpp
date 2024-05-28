//Binary Search

#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
// int binarySearch(int arr[],int size,int target){
//     int start =0;
//     int end=size -1;
    
//     while (start<=end)
//     {
//         int mid = (start+end)/2;

//         if(arr[mid]== target){
//             return mid;
//         }
//         else if(arr[mid] > target){
//             end =mid -1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
//     return -1;
// }
int main(){
    // int arr[]={2,4,5,6,7,8,9,10,11,12};
    // int size = 10;
    // int target =12;

    // int IndexofTarget = binarySearch(arr,size,target);

    // if(IndexofTarget == -1){
    //     cout<<"target not found"<<endl;
    // }
    // else{
    //     cout<<"Target found at index "<<IndexofTarget<<endl;
    // }

// Using STL library to binarySearch

vector<int>v{1,2,3,4,5,6,7};
// if(binary_search(v.begin(),v.end(),6)){
//     cout<<"Found"<<endl;
// }
// else{
//     cout<<"bhag ja bhai"<<endl;
// }
int arr[]={5,6,7,8,9,10,11,12,13};
int size =9;

if(binary_search(arr,arr+size,60)){
    cout<<"Found"<<endl;
}
else{
    cout<<"bhag ja bhai"<<endl;
}
return 0;
}