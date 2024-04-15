#include<iostream>
using namespace std;

int main()
{
//-------------If else elif--------------
    // int age;
    // cout<<"Enter the age"<< endl;
    // cin>>age;

    //  if(age <18){
    //     cout<<"no vote"<< endl;

    // }
    // else{ 
    // cout<<"vote"<< endl;
        
    // }
//     int marks;

//     cin>> marks;
//     if(marks>=90){
//         cout<< "A grade"<< endl;
//     }
//     else{
//         if(marks>=80){
//             cout<< "B grade";
//         }
//         else{
//             if(marks>=60){
//                 cout<< "C grade";
//             }
//             else{
//                 if(marks>=40){
//                     cout<<"D grade"; 
//                 }
//                 else{
//                     cout<< "F grade";
//                 }
//             }
//         }

//     }

// }
//  int ab;
//  cin>>ab;


//  if(ab==0){
//     cout<< "Baat ban jayegi";
//  }
//  else{
//     cout<< "baat nhi banegi";
//  }
//--------loops------------------
// for(int i=0;i<5;i=i+1){
//   // cout<< "MUKUL PANDEY"<< endl;
//  cout<<i<< endl;
// for(int i=5;i>0;i=i-1){
//   // cout<< "MUKUL PANDEY"<< endl;
//  cout<<i<< endl;
// for(int i=1;i<=10;i++){
//    cout<< 2*i<<endl;
// }
// for(int i=0;i<=5;i+2){
//    cout<< i<< endl;
// }
// for(int i=0;i<=5;i=i+2)
// cout<< i << endl;
// for(int i=1; i<10; i=i+2){
//   cout<< i << endl;  
// }
// for(int i=100;i>0;i=i/2){
//     cout << i<<  endl;
// }
// for(int i=5;(i>=0 && i<=10 );i=i+1){
//     cout<< i << endl;
// }

// int n;
// if(cin>> n){
//     cout<< "Baba";

// }
//--------------Pattrens-------------------
//1.     Solid Ractangle
//Outer loop for row
// for(int row=0; row <3;row=row+1){
      //inner loop for col
//     for(int col=0;col<5;col=col+1){

//         cout<<"* ";
//     }
//     cout<< endl;
//---------------------------------------
//2.Solid Ractangle with input by user 
// int n;
// cin>>n;
// for(int row=0; row <n;row=row+1){

//     for(int col=0;col<n;col=col+1){

//         cout<<"* ";
//     }
//     cout<< endl;

// }
//EXPERIMENT
// int n;
// cin>>n;
// for(int col=0; col <n;col=col+1){

//     for(int row=0;row<n;col=row+1){

//         cout<<"* ";
//     }
//     cout<< endl;

// }
//3. HOLLOW RACTANGLE
// int rowCount,colCount; 
// cin >> rowCount;
// cin >> colCount;

// for(int row=0;row<rowCount;row++){
//     //first row or last row -> print 5 *
//     if(row == 0 || row ==rowCount-1){
//         for( int col = 0;col<colCount; col++){
//             cout<< "* ";
//         }
//     }
//         else{
//             //remaining middle rows
//             //first star
//             cout << "* ";
//             //spaces
//             for(int i=0; i<colCount-2;i=i+1){
//                 cout<< "  ";
//             }
//             //last star
//             cout << "* ";
//         }
//         cout <<endl;
//     }
//4.HALF PYRAMIND

// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){
//     for(int col=0;col<row+1;col++){
//         cout<< "*";

//     }
//     cout<< endl;
// }
//5.INVERTED HALF PRAMID
// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){
//     for(int col=0;col<rowCount-row;col++){
//         cout<<"*";

//     }
//     cout<< endl;
// }
//6.NUMERIC HALF PYRAMID
// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<col+1;


//     }
//     cout<< endl;

// }
//7.INVERSE NUMERIC PATTERN

// int rowCount;
// cout<< "Enter the number of rows to print"<<endl;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){
//     for(int col=0;col<rowCount-row;col++){
//         cout<<col+1;


//     }
//     cout<< endl;

// }

//TRAIL BY ME
// int rowCount;
// cin>> rowCount;
// for(int row=0;row<rowCount;row++){   
//      for(int col= 0;col<row;col++){
//         cout<< " ";
//     }

//     for(int col=0;col<rowCount-row;col++){
//         cout<< "*";

//     }cout<<endl;
// }

}

