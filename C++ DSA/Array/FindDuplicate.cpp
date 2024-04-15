#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>arr{1,2,3,4,3};

    //Method 1----->Sort
//    sort(arr.begin(),arr.end());

//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1])
//             cout<<arr[i]<<endl;
//     }
//     for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";

// }
// cout<<endl; 

//--------->Method 2:Visited marking 
// int ans =-1;
// for(int i=0;i<arr.size();i++){
//     int index=abs(arr[i]);

//     //Checking Already Visited?
//     if(arr[index]<0){
//         ans=index;
//         cout<<ans;
//     }

//     //Marking Visited
//     arr[index] *=-1;
// }

//--------->Method 3: Posotioning method
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    cout<<arr[0];
    return 0;
}