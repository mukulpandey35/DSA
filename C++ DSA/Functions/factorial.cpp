#include<iostream>
using namespace std;
int fact(int n){
    int result =1;
    for(int i=1;i<=n;i++){
        result = result*i;

    }
    cout<<result;
    return 0;
}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}