#include<iostream>
using namespace std;
int SetKthBit(int n,int k){
    int mask= 1<<k;
    int result = n|mask;
    cout<<result;
    return 0;
    //return n|(1<<k);
}
int main(){
    int value,Kth;
    cin>>value;
    cin>>Kth;
    int ans =SetKthBit(value,Kth);
    return 0;
    
}