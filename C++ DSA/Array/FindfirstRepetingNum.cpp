#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,3,4,5};
    int sizea =8;
//     int l=0;
//     for(int i=0;i<sizea;i++){
//         bool isRepeated = false;
//         for(int j=i+1;j<sizea;j++){
//              if(arr[i]==arr[j]){
//                 isRepeated=true;
//                 cout<<i+1;
//                 return 0; 
//              }
//         }
//     }
//  return -1;

//     Hashing kr ke check krenge 
    unordered_map<int,int>hash;
    for(int i=0;i<sizea;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<sizea;i++){
        if(hash[arr[i]]>1){
            cout<<i+1;
            return 0;
        }
    }

return 0;
}