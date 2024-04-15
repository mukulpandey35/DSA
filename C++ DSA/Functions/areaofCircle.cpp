#include<iostream>
using namespace std;
float AoC(int n){
   float Area = 3.14*n*n;
    cout<<Area;
    return 0;

}
int main(){
    float radious;
    cout<<"Enter the radious od Circle"<<endl;
    cin>>radious;
    AoC(radious);
    return 0;
}