//2D Array 
#include<iostream>
#include<vector>
using namespace std;
// int printSumRowWise(int arr[3][3],int rows,int col){
//     for(int i=0;i<rows;i++){
//         int sum =0;
//         for(int j=0;j<col;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }


// bool linearSearch(int key,int arr[3][3],int rows,int cols){
// for(int i=0;i<rows;i++){
//     for(int j =0;j<cols;j++){
//         if(arr[i][j]==key){
//             return true;
//         }
    
//     }
//     return false;
// }
//}
// int getmax(int arr[3][3],int rows,int cols){
//     int maxi =INT16_MIN;
//     for(int i=0;i<rows;i++){
//         for(int j =0;j<cols;j++){
//             if(arr[i][j]>maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }


// int getmin(int arr[3][3],int rows,int cols){
//     int min =INT16_MAX;
//     for(int i=0;i<rows;i++){
//         for(int j =0;j<cols;j++){
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
//     }
//     return min;
// }

//Transpose an array
// void Transpose(int arr[][3],int r ,int c,int transposeArr[][3]){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             // swap(arr[i][j],arr[j][i]);
//             transposeArr[j][i]=arr[i][j];
//         }
//     }
// }


// void PrintArray(int arr[][3],int r,int c){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
// }
int main(){

    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   // cout<<arr[0][1]<<endl;
    //row wise printing
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Column wise printing 
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int arr[3][3];
    // int rows = 3;
    // int cols =3;
    
    //taking row wise input 
    // for (int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // //Printing row wise
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // //taking input col wise
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //          cin>>arr[j][i];
    //     }
    //     cout<<endl;
    // }
    //printing col wise
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";//Here we are printing normally because we have taken input in col wise 
    //     }
    //     cout<<endl;
    // }
    

    //---->Row Sum ===> Row wise traversal
    // printSumRowWise(arr,rows,col);

    //Linear Search
    // int rows =4;
    // int cols =4;
    // int arr[4][4];
    // for (int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>arr[i][j];
    //     }
    // } 
    // int key;
    // cin>>key;
    
    // cout<< linearSearch(key,arr,rows,cols);

    //Get maximum numbers in Array
    //cout<<getmax(arr,rows,cols)<<endl;

    //Get minimum numbers in Array
    //   cout<<getmin(arr,rows,cols)<<endl;

    //Transpose array 

    // PrintArray(arr,rows,cols);
    // int transposeArr[3][3];
    // Transpose(arr,rows,cols,transposeArr);
    // PrintArray(transposeArr,rows,cols);


//NOW 2D ARRAY BY THE USE OF VECTOR

    //2d vector  create

    // vector<vector<int> >arr;

    // vector<int>a{1,2,3};
    // vector<int>b{4,6,8};
    // vector<int>c{7,5,9};
    
    // //Pushing vector as elemnt
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

//printing the vector
    //    for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

// vector<vector<int> >arr(5,vector<int>(5,-8));

//        for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    return 0;
}