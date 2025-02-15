#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool possibleSolution(vector<int >arr,int p,int mid){
    int currntP =0;
    for(int i=0;i<arr.size();i++){
        int R = arr[i], j= 1;
        int timeTaken = 0;

        while(true){
            if(timeTaken + j * R<= mid){
                ++currntP;
                timeTaken += j* R;
                ++j;
            }
            else{
                break;
            }
        }
        if(currntP>=p){
            return true ;
        }
    }
    return false;
}

int minTime(vector<int>arr,int p){
    int start =0;
    int Rmax = *max_element(arr.begin(),arr.end());
    int end = Rmax * ( p * (p+1) /2);
    int ans = -1;
    while (start<= end){
        int mid = (start+end) >> 1;
        if(possibleSolution(arr,p,mid)){
            ans = mid;
            end = mid -1;
        }
        else
            start = mid +1;
    }
    return ans;
}

int main(){
    vector<int > arr{1,2,3,4};
    int p = 10;
    // int c = sizeof(arr)/sizeof(int);
    int ans = minTime(arr,p);
    cout<< "Minimum Required time: "<< ans <<endl;
    return 0;
}