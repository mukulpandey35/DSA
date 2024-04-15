#include<iostream>
using namespace std;
// void printName(){
//     int n;
//         cin>>n;
//     for(int i = 0;i<n;i++){
//         cout<<"mukul"<<endl;

//     }
// }
// void printNumber(int num){
//     cout<<num<<endl;
   
// }
// int addTwoNum(int a,int b){
//     int result = a+b;

//     return result;

// }
// int findMax(int a, int b,int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a&& b>c){
//         return b;
//     }
//     else 
//     return c;    


// }
// int add(int a,int b){
//     return a+b;
// }
// int FindMax(int a, int b, int c){
//     if(a>b && a>c){
//         return a;
    
//     }
//     else if (b>a && b>c){
//        return b;
//     }
//     else{
//         return  c;
//     }

    
// }
// void printCount(int x){

//     for(int i=1;i<=x;i++){

//         cout << i;
        
//     }


// }
// int getGrade(int a){
    // if(a>=90)
    // return 'A';

    // else if (a>=80)
    // return 'B';

    // else if (a>=70)
    //     return 'C';
    
    // else if(a>=60)
    //     return 'D';
    
    // else
    //     return 'E';



    // switch (a/10)
    // {
    // case 9: return 'A';break;
    // case 8: return 'B';break;
    // case 7: return 'C';break;
    // case 6: return 'D';break;

    // default:return 'E';
    //     break;
    // }

// int getSum(int n){
//     int sum =0;
//     for(int i =1 ;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;

int getEvenSum( int a){
    int sum = 0;
    for(int i = 2;i<=a;i=i+2){
        sum =sum +i;
    }
    return sum;
}




int main(){

    // for(int i = 0;i<n;i++){
    //     cout<<"mukul"<<endl;

    // }
    //     cin>>n;
    // for(int i = 0;i<n;i++){
    //     cout<<"mukul"<<endl;

    // }
    //     cin>>n;
    // for(int i = 0;i<n;i++){
    //     cout<<"mukul"<<endl;

    // }
    // printName();
    // int a= 5;
    // printNumber(a);
    // int a,b,c;
    // cin>> a;
    // cin>> b;
    // cin>> c;
    // int max=findMax(a,b,c);
    // cout<<max;


    // int sum=addTwoNum(a,b);
    // cout<< sum;

// --------------> find address of any variable


// cout<< &a<<endl;
// -----------> to add two numbers

// int a;
// cin>> a;
// int b;
// cin>> b;

// -------------->Addition of two numbers

// int sum= add(a,b);
// cout<< sum<<endl;
// int a,b,c;
// cin>> a>> b >>c;

// ------------>Max find

// int result = FindMax(a,b,c);
// cout << result;

// ---------->Counting program

// int n;
// cin>>n;
// printCount(n);

// ----------->Student Grade 
// int marks;
// cin>>marks;
// char finalGrade = getGrade(marks);
// cout<< finalGrade<<endl;

// ------------> Sum of numbers upto n

// int n;
// cin>>n;

// int ans=getSum(n);
// cout<< ans<<"\n";
// ------------> Sum of numbers upto n
int n;
cin>> n;
int ans = getEvenSum(n);
cout<<ans<<"\n";

return 0;

}
