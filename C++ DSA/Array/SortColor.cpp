#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int sortColors(vector<int>&nums){
//     sort(nums.begin(),nums.end());
 
// }

int main(){
    vector<int>nums{0,1,2,0,2,1};
    // int zeros,ones,twos;
    // zeros=ones=twos=0;

    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]==0){
    //         zeros++;

    //     }
    //     else if(nums[i]==1){
    //         ones++;

    //     }
    //     else
    //         twos++;
    // }
    // int i=0;
    // while(zeros--){
    //     nums[i]=0;
    //     i++;
    // }
    //  while(ones--){
    //     nums[i]=1;
    //     i++;
    // }
    //  while(twos--){
    //     nums[i]=2;
    //     i++;
    // }
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    

//3rd Solution:----> inplace Approach
int l,m,h;
l = m =nums[0];
h = nums.size()-1;
while(m<=h){
    if(nums[m]==0){
    swap(nums[l],nums[m]);
    l++;
    m++;

}
else if(nums[m]==1){
    m++;
}
else{
swap(nums[m],nums[h]);
h--;
}

}

for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

return 0;
}