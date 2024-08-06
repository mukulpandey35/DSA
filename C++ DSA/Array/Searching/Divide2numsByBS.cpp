#include<iostream>
using namespace std;

int findQuotient(int dividend ,int divisor){
    int s=0;
    int e=abs(dividend);
    int ans;
    while(s<=e){
        int mid =s +(e-s)/2; 
        if(abs(mid*divisor) ==abs(dividend)){
            ans = mid;
            break;
        }
        if(abs(mid*divisor)<=abs(dividend)){
            ans = mid;
            s =mid+1;
        }
        if(abs(mid*divisor)> abs(dividend)){
            e=mid-1;
        }
    }
    if((divisor <0 && dividend <0)|| (divisor > 0 && dividend >0))
        return ans;
    else {
        return -ans;
    }    
}

int main(){
    int dividend;
    cout<<"Dividend : "<<endl;
    cin>>dividend;
    int divisor;
    cout<<"Devisor : "<< endl;
    cin>>divisor;

    int ans =findQuotient(dividend,divisor);
    cout<<ans;
    return 0;
}