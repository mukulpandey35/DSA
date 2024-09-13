#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[9]={1,5,10,20,40,80,85,87,90};
    int brr[5]={6,7,20,80,100};
    int crr[8]={3,4,15,20,30,70,80,120};
    int n1=9;
    int n2 =8;
    int n3 =8;
    vector<int>ans;
    int i=0;
    int j=0;
    int k=0;

   while(i<n1 &&j<n2 && k<n3){
                if(arr[i]==brr[j] && brr[j]==crr[k]){
                   cout<<arr[i]<<" ";
                    i++,j++,k++;
                }
                else if(arr[i]<brr[j]){
                    i++;
                }
                else if(brr[j]<crr[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
return 0;
}
