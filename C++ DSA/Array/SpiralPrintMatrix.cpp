#include<iostream>
#include<vector>

using namespace std;
int spiralPrintMatrix(vector<vector<int> >arr){
    vector<int>ans;
    int m =arr.size();
    int n=arr[0].size();
    int total_elements =m*n;
    
    int startingRow = 0;
    int endingCol = n-1;
    int endingRow =m-1;
    int startingCol = 0;
    int count = 0;

    while(count<total_elements){
        //printing starting ka row
        for(int i=startingCol;i<=endingCol && count<total_elements;i++){
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;
        //printing ending ka col
        for(int i=startingRow;i<=endingRow && count<total_elements;i++){
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending ka row
        for(int i=endingCol;i>=startingCol && count<total_elements;i--){
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;
        //printing starting ka col
        for(int i=endingRow;i>=startingRow && count<total_elements;i--){
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<vector<int> >arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    spiralPrintMatrix(arr);
    return 0;
}