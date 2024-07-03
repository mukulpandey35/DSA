#include<iostream>
#include<vector>

using namespace std;
int wavePrintMatrix(vector<vector<int> >arr){
    int m= arr.size();
    int n=arr[0].size();
    for(int startCol=0;startCol<n;startCol++){
        //even no of col-> top to bottom.
        if((startCol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][startCol]<<" ";
            }

        }
        else {
            //odd no of cols-> bottom to top
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][startCol]<< " ";
            }
        }
    }
}

int main(){
    vector<vector<int> >arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    wavePrintMatrix(arr);
    return 0;
}