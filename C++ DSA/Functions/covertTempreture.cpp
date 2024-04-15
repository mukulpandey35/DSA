#include<iostream>
using namespace std;
float TempConvert(float n){
    int select;
    cout<<"In which scale want to covert 1.Celcius to Kelvin,2.Celcius to Farenheait"<<endl;
    cin>>select;
    if(select==1){
        cout<<n*1.80+32;

    }
    else
    cout<<n+273.15;
    return 0;    

}
int main(){
    int temp;
    cout<<"Enter tempreture in celcius"<<endl;
    cin>>temp;
    int ans =TempConvert(temp);
    return 0;
}