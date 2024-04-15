#include<iostream>
using namespace std;

int main(){
  //----------->NUMERIC FULL PYRAMID WITH REVERSE COUNTING
  //   int n;
  //   cin>>n;
    
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i-1;j++){
  //       cout<<" ";
  //   }
  //   // FOR NUMBERS
  //   for(int j=0;j<i+1;j++){
  //       cout<<i+j+1;
  //   }
  //   int start=2*i;
  //   for(int j=0;j<i;j++){
        
  //       cout<<start;
  //       start--;
  //   }
  //   cout<<endl;
  // }


//----------->nUMERIC HOLLOW FULL PYRAMID
int n;
cin>>n;
for(int i=0;i<n;i++){
  for(int j=0;j<n-i-1;j++){
    cout<<" ";
  }
  int start=1;
  for(int j=0;j<2*i+1;j++){
    if(i==0||i==n-1){
      if(j%2==0){
        cout<<start;
        start++;
      }
      else
        cout<<" ";

    }
    else{
      if(j==0)
      cout<<1;

      else if (j==2*i){
        cout<<i+1;
      }
      
      else
      cout<<" ";
    }
  }
  cout<<endl;

}


}
