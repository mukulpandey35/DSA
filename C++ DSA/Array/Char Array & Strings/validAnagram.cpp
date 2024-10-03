#include<iostream>
#include<algorithm>

using namespace std;
//Method 1
int checkAnagram(string s ,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if (s==t){
        return true;

    }
    else 
        return false ;
}
// Method 2
bool isAnagram(string s,string t){
    int freqTableofASCII [256]={0};
    for(int i =0 ; i <s.size();i++){
        freqTableofASCII[s[i]] ++;
    }

    for (int i =0 ;i < t.size();i++){
        freqTableofASCII[t[i]] --;
    }

    for(int i =0;i<256;i++){
        if (freqTableofASCII[i]!= 0){
            return false;
        } 
    } 
    return true;
}

int main(){
    string s = "anagram";
    string t = "ramnaga";

    cout << "The Output is : " << checkAnagram(s,t)<<" By method 1" <<endl; // Method 1
    cout << "The Output is : " << isAnagram(s,t)<<" By method 2" <<endl; // Method 2
}