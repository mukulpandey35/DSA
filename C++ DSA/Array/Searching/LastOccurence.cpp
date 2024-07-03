#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int lastOccurence(vector<int>arr,int target){
    int s=0;
    int e = arr.size()-1;
    int ans = -1;
    while (s<=e)
    {
        int mid =(s+e) /2;
        if(arr[mid]==target){
            ans =mid;
            s =mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e =mid -1;
        }

    }
return ans;
    
}
int main(){
    vector<int>arr{1,2,3,4,5,6,6,6,6,6,6,7,8};
    int target =6;
    int ans =lastOccurence(arr,target);

    cout<<"The Ans is "<<ans<< endl;

    auto ans2 = upper_bound(arr.begin(),arr.end(),target);
    
    cout<<"STL ans is "<< ans2-arr.begin();
    return 0;
}