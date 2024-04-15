#include<iostream>
using namespace std;
// int printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }
// int inc(int arr[],int size){
//     arr[0]=arr[0]+10;
//     printarray(arr,size);
//     return 0;
// }



// bool searchinArray(int arr[],int size,int key){
//     for(int i =0;i<size;i++){
//         if(arr[i]==key){
//            return true;
//         }
//     }
//     return false;
// }


int main(){
    // int arr[53];
    // char ar[166];
    // bool a[23];
    // int arr[]={2,3,4,5,6};
    // int arr[5]={2,3,4,5,6};
   // cout<<"Array Initialized Successfully!"<<endl;
//    int arr[]={1,2,3,4,5};
//    cout<<arr[0]<<endl;
//    cout<<arr[1]<<endl;
//    cout<<arr[2]<<endl;
//    cout<<arr[3]<<endl;
//    cout<<arr[4]<<endl;

// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }
    // int m[10];
    // cout<<"enter the input values in array"<<endl;
    // for(int i=0;i<10;i++){
    // // int n;
    // // cin>>n;
    // // m[i]=n;
    // cin>>m[i];
    // }
    // cout<<"printing the values of array"<<endl;
    // for(int i=0;i<10;i++)
    // {
    // cout<<m[i]<<endl;
    // }

    //Double the elements of array
    
    // int arr[5]={2,3,4,5,6};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]*2<<endl;
    // }

    //Change All the elements of array to 1
    // int arr[]={2,4,8,6,3,5,9,7,};
   
    // for(int i=0 ;i<8 ;i++){
    //     arr[i]=1;
    // }
    // for(int i=0 ;i<8 ;i++){
    // cout<<arr[i]<<endl;
    // }

    //Array in function
    // int arr[5]={2,4,5,6,3};
    // int size = 5;
    // inc(arr,size);
    // printarray(arr,size);


    //Linear search in Array

    // int arr[10]={5,6,4,9,8,7,3,6,65,6};
    // int size=10;
    // int key ;
    // cin>>key;
    // if(searchinArray(arr,size,key)){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }

//------------>Count Zero And One in Array 
    // int arr[]={1,0,1,0,0,0,1,1,1,8,0,0,1};
    // int size=13;
    // int countZero=0;
    // int countOne=0;

    // for(int i=0;i<size;i++){
    //     if(arr[i]==1){
    //         countOne+=1;
    //     }
    //     if(arr[i]==0)
    //     countZero+=1;
    // }
    // cout<<"Number of Ones:- "<<countOne<<endl;
    // cout<<"Number of zero's:- "<<countZero;

//------------>Find Max in Array

    // int arr[10]={1,2,3,4,5,6,8,9,5,42};
    // int maxNum=INT16_MIN;
    // for(int i=0;i<10;i++){
    //     if(arr[i]>maxNum){
    //         maxNum=arr[i];
    //     }
    // }
    // cout<<maxNum<<endl;
//-------------->Find min in Array 


//   int arr[10]={0,2,3,4,5,6,8,9,5,42};
//     int minNum=INT16_MAX;
//    for(int i=0;i<10;i++){

//        if(arr[i]<minNum){
//            minNum=arr[i];
//        }
//     }
//    cout<<minNum<<endl;

//--------------->Extreme Print in Array

    // int arr[9]={2,3,6,4,8,7,1,12,1};
    // int size=9;
    // int start=0;
    // int end=size-1;
    // while(true){
    //     if(start>end){
    //         break;
    //     }

    //     if(start==end){
    //         cout<<arr[start]<<" ";
    //     }
    //     else
    //     {
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }
        
    //     start++;
    //     end--;
        
    // }

//------------------------>Reverse an array

    int arr[9]={2,3,6,4,8,7,1,12,1};
    int size=9;
    int start = 0;
    int end = size -1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

