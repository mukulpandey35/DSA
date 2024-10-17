#include<iostream>
#include<vector>

using namespace std;

string convert (string s , int numRows){
    if(numRows == 1) return s;

    vector<string>zigZag(numRows);

    int i = 0,row = 0;

    bool direction = 1 ;// Top-> Bottom

    while (true){
        if(direction == 1){
            while(row<numRows && i < s.size()){
                zigZag[row++].push_back(s[i++]);
                
            }
            row = numRows -2;
        }
        else{
            while(row>= 0 && i< s.size()){
                zigZag[row--].push_back(s[i++]);
            }
            row =1;

        }
        if(i>= s.size()) break;

        
        direction  = !direction;
    }
    string ans = "";
    for(int i = 0;i<zigZag.size();i++){
        ans += zigZag[i];
        
    }
    return ans;

}

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout<< convert(s,numRows) << endl;
}