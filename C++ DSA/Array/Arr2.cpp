#include<iostream>
#include<vector>
using namespace std;

int main(){
//Create vector
vector<int>arr;

// int ans=(sizeof(arr)/sizeof(int));
// cout<<ans<<endl;

//cout<<arr.size()<<endl;//To check the elements
//cout<<arr.capacity()<<endl;// To check the no of elements can be stored in Vector

//insert elements in array
// arr.push_back(8);
// arr.push_back(9);

//remove or Delete from array 
// arr.pop_back();
// arr.pop_back();

//Print Vector
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";

// }
// cout<<endl;

// int n;
// cout<<"Enter the size of vector"<<endl;
// cin>>n;


// vector<int>brr(n,-101);
// cout<<brr.size()<<endl;
// cout<<brr.capacity()<<endl;


// for(int i=0;i<brr.size();i++){
//     cout<<brr[i]<<" ";

// }
vector<int>crr{10,20,30};

for(int i=0;i<crr.size();i++){
    cout<<crr[i]<<" "<<endl;

}
cout<<"Vector is empty or not "<<crr.empty();

}