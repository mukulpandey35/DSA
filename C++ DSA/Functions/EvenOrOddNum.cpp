#include<iostream>
using namespace std;
int EorV (int n){
    if(n%2==0){
        cout<<"num is Even"<<endl;
    }
    else
        cout<<"num is Odd"<<endl;
 return 0;
}
int main(){
    int num;
    cin>>num;
    EorV(num);
    return 0;
}