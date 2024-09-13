#include<iostream>
#include<vector>


using namespace std;

int main(){
    int arr[6]={0,9,0,0,3,5};
    int arr2[6]={0,0,0,2,2,7};
    int n =6;
    int m=6;

  vector<int>ans;
    int carry =0;
    int i=n-1;
    int j=m-1;

    while(i>=0 &&j>=0){
        int x = arr[i]+ arr2[j] + carry;
        int digit = x%10;
        ans.push_back(digit);
        carry =x/10;
        i--;
        j--;
    }
    while(i>=0){
        int x = arr[i]+ 0 + carry;
        int digit = x%10;
        ans.push_back(digit);
        carry =x/10;
        i--;
    }
    while(j>=0){
        int x = 0+ arr2[j] + carry;
        int digit = x%10;
        ans.push_back(digit);
        carry =x/10;
        j--;
    }
    if(carry){
        ans.push_back(carry);
    }
    
    for(int i  = ans.size()-1;i>=0;i--){
        cout<<ans[i]<< " ";
    }

return 0;
}