#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int firstOccurence(vector<int>arr, int target){
    int s =0;
    int e = arr.size()-1;
    int ans =-1;
    while(s<=e){
        int mid = (s+e) /2;
        if(arr[mid]==target){
            ans =mid;
            e =mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid -1;
        }
    }
    return ans;

}

int main(){
    vector<int>arr{1,2,3,4,4,4,4,4,5,6};
    int target = 6;

    int ans = firstOccurence(arr,target);

    cout <<"Ans is "<<ans<<endl;


    auto StlAns = lower_bound(arr.begin(),arr.end(),6);
    cout<<" STL ans is "<< StlAns-arr.begin();
    return 0;
}