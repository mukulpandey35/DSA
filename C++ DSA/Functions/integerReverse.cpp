#include<iostream>
using namespace std;

int revInt(int x){
    int ans=0;
    // int rem=0;
    bool isNeg=false;
//check for x exceed the 32 biut value

    if(x<INT32_MIN){
        return 0;

    }
// if x input is less than 0 or negative 
    if(x<0){
        isNeg=true;
        x=-x;
    }
    
    while(x>0){
        //check if the number is exceeding the +32 bit value 
        if(ans>INT32_MAX/10){
            return 0;
        }
        //now the reverse process starts 
        int digit =x % 10;
        ans=ans*10+digit;
        x=x/10;

    }
    return isNeg?-ans:ans;
}

int main(){
    int n;
    cin>>n;
    int ans=revInt(n);
    cout<<ans;
    return 0;
}