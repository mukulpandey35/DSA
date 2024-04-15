#include<iostream>
using namespace std;
int main(){

// -------------->FULL PYRAMID
// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){   
//      for(int col= 0;col<rowCount-row-1;col++)
//      {
//         cout<< " ";
//     }

//     for(int col=0;col<row+1;col++){
//         cout<< " *";

//     }
//     cout<<endl;
// }
// }
// -------------->INVERTED FULL PYRAMID

// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){   
//      for(int col= 0;col<row;col++)
//      {
//         cout<< " ";
//     }

//     for(int col=0;col<rowCount-row;col++){
//         cout<< " *";

//     }
//     cout<<endl;
// }
// }
// ----------->SOLID DIAMOND=FULL PYRAMID+INVERTED FULL PYRAMID
// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){   
//      for(int col= 0;col<rowCount-row-1;col++)
//      {
//         cout<< " ";
//     }

//     for(int col=0;col<row+1;col++){
//         cout<< " *";

//     }
//     cout<<endl;
// }

// for(int row=0;row<rowCount;row++){   
//      for(int col= 0;col<row;col++)
//      {
//         cout<< " ";
//     }

//     for(int col=0;col<rowCount-row;col++){
//         cout<< " *";

//     }
//     cout<<endl;
// }
// }
//------------->HOLLOW DIAMOND
// int n;
// cin>>n;
// //-------------->FOR THE UPPERE PART OF PATTERN

// for(int i=0;i<n;i++){
//     //SPACES
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++){
//         //stars
//         if(j==0){
//             cout<<"*";
//         }
//         else if(j==2*i){
//             cout<<"*";
//         }
//         //SPACES IN THE MIDDLE OF THE STARS
//         else
//         cout<<" ";
//     }
//     cout<< endl;
// }
// //------------->FOR THE UPPER PART OF THE PATTERN
// for(int i=0;i<n;i++){
//     //speces
//     for(int j=0;j<i;j++){
//     cout<<" ";
//     }
//     for(int j=0;j<2*n-2*i-1;j++){
//         //STARS
//         if(j==0||j==2*n-2*i-2){
//             cout<<"*";
            
//         }
//         //SPECES IN THE MIDDLE OF THE STARS
//         else
//         cout<<" ";
//     }cout<<endl;
// }

// }
//---------------->FLIPPED SOLID DIAMOND
// int n;
// cin>>n;
// //----------->PART A
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
// //------------>PART B
//     for(int j=0;j<2*i+1;j++){
//     cout<<" ";
//     }
//     //---------->PART C
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }cout<< endl;

//     }
// //-------------->lOWER PART A
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
// //------->L P B
//     for(int j=0;j<2*n-2*i-1;j++){
//     cout<<" ";
//     }
// //---------->LPC
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }cout<< endl;

//     }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows for the Pattern";
//     cin>>n;for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*n-2*i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }


//----------->Fancy pattern #2
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<i+1;
//         if(j!=i){
//             cout<<"*";
//         }
        
//     }cout<<endl;
// }
// for(int i=0;i<n;i++){


//     for(int j=0;j<n-i;j++){
//         cout<<n-i;
//         if(j!=n-i-1){
//             cout<<"*";
//         }
//     }
//     cout << endl;
// }
// }
    
// int n;
// cout<<"Enter the number of rows to print "<< endl;
// cin>>n;
// for(int i =0;i<n;i++){
//     for(int j = 0;j<i+1;j++){
//         cout<<i+1;
//         if(j!= i){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<n-i;
//         if(j!=n-i-1){
//             cout<<"*";

//         }
//     }cout<<endl;
// }
//------------------------>ALPHABET PALINDROME
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     int j;
//     for(j=0;j<i+1;j++){
//         int palindrome=j+1;
//         char ch = palindrome+'A'-1;

//         cout<<ch;
//     }
//     for(int j=i;j>=1;j--){
//        int palindrome=j;
//        char ch = palindrome+'A' - 1;
//        cout<<ch ;
//     }
//     cout<<endl;
// }
//-------->NUMERIC HOLLOW HALF PYRAMID
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         if(j==0||i==n-1||j==i){
//             cout<<j+1;
//         }
//         else
//         cout<<" ";
//     }
//     cout<<endl;
// }
//------------>INVERTED NUMERIC HOLLOW HALF PYRAMID
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         if(i==0||j==0||j==n-i-1){
//             cout<<j+1;
//         }
//         else
//         cout<<" ";
//     }
//     cout<<endl;
// }

// }
