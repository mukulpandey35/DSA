//--------------->PRINTING SOLID SQUARE PATTERN 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows to print"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
// }
//------------>PRINTING HOLLOW SQUARE PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows to print"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0||i==n-1||j==0||j==n-1){
//               cout<<"*";   
//             }
//             else{
//                 cout<<" ";
//             }
           
//         }cout<<endl;
//     }
// }
//------------>HOLLOW INVERTED  HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows to print"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0||j==0||j==n-i-1){
//               cout<<"*";   
//             }
//             else{
//                 cout<<" ";
//             }
           
//         }cout<<endl;
//     }
// }
//---------> Hollow Half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows to print"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==n-1||j==0||i==j){
//               cout<<"*";   
//             }
//             else{
//                 cout<<" ";
//             }
           
//         }cout<<endl;
//     }
// }
//------------>LEFT HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
// int rowCount;
// cin>> rowCount;
//    for(int row=0;row<rowCount;row++){
//     for(int col=0;col<row+1;col++){
//         cout<< "* ";

//     }
//     cout<< endl;
//    }
// }

//-----------> LEFT HALF INVERTED PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";

//         }cout<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
// int rowCount;
// cin>> rowCount;
//    for(int row=0;row<rowCount;row++){
//     for(int col=0;col<row+1;col++){
//         cout<< "*";
//     }cout<< endl;
//    }
// }
//------------->FULL PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
    
// int n;
// cin>> n;
// for(int i=0;i<n;i++){
//     int k=0;
//     for(int j=0;j<((2*n)-1);j++){
//         if(j<n-i-1){
//             cout<<" ";
//         }
//         else if(k< 2*i+1){
//             cout<< "*";
//             k++;
//         }
//         else {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }
//--------->Hollo Full pyramid
// #include<iostream>
// using namespace std;
// int main(){
    
// int n;
// cin>> n;
// for(int i=0;i<n;i++){
//     int k=0;
//     for(int j=0;j<((2*n)-1);j++){
//         if(j<n-i-1){
//             cout<<" ";
//         }
//         else if(k< 2*i+1){
//             if(k==0||k==2*i||i==n-1){
//                  cout<< "*";
//             }
//             else
//                 cout<<" ";
//             k++;
//         }
//         else {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }
