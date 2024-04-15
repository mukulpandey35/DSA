//Pair Sum
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr{10,20,30,40,50};
//     int sum=70;
//     //print all pairs
//       //outerloop will traverse for each element
//       for(int i=0;i<arr.size();i++){
//         int element=arr[i];
//         //for every element,inner loop will traverse aage wala elemnt
//         for(int j=i+1;j<arr.size();j++){
//             if(element+arr[j]==sum){
//                 cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//             }
//         }
//       }
//       return 0;
// }

//Triplet sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,50};
    int sum=70;
    //print all pairs
      //outerloop will traverse for each element
      for(int i=0;i<arr.size();i++){
        int element1=arr[i];
        //for every element,inner loop will traverse aage wala elemnt
        for(int j=i+1;j<arr.size();j++){
            int element2=arr[j];
            for(int k=j+1;k<arr.size();k++){
                int elememt3=arr[k];
                if(element1+element2+elememt3==sum){
                cout<<"("<<element1<<","<<element2<<","<<elememt3<<")"<<endl;
            }

            }
            
        }
      }
      return 0;
}