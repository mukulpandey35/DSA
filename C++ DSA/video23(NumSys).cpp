#include<iostream>
#include<cmath>

using namespace std;

// int DecToBinByM1 (int n){
//     while(n>0){
//         int bin =n%2;
//         cout<< bin;
//         n=n/2;
//     }
//     cout<<endl;
//     return 0;
// }

// int DecToBinByM1 (int n){
//     int binaryno=0;
//     int i =0;
//     while(n>0){
//         int bin =n%2;
//         binaryno = bin *pow(10,i++)+binaryno;

//         n=n/2;
//     }
//     cout<<endl;
//     return binaryno;
// }


// int DecToBinByM2 (int n){
//     // bitwise method 
//     int binaryno=0;
//     int i =0;
//     while(n>0){
//         int bin = (n & 1);
//         binaryno = bin *pow(10,i++)+binaryno;

//         n=n >> 1;
//     }
//     cout<<endl;
//     return binaryno;
// }

int binToDec(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int bit = n%10;
        decimal = decimal + bit * pow( 2, i++);
        n /= 10; 
    }

    return decimal;
}
int main(){
//     int n;
//     cin>>n;
//    int binary= DecToBinByM2 (n);
//    cout<<binary<<endl;

    int n;
    cin>>n;
   int binary= binToDec (n);
   cout<<binary<<endl;
    return 0; 
}