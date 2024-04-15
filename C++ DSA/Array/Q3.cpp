//Intersection of two arrays
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6,7};
    
    vector<int>brr{4,5,6,7,9,10};
   
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                ans.push_back(element);
                brr[j]=INT16_MIN;
            }
        }
    }
    for(auto value:ans){
        cout<<value<<" ";

    }
    cout<<endl;

return 0;    
}