#include<iostream>

using namespace std;
string reorganizeString(string s){
    int hash[26] = {0};
    
    for(int i =0; i<s.size();i++){
        hash[s[i] -'a']++;
    }
    //find the most occuring char 
    char maxFreqChar;
    int maxFreq = INT32_MIN;
    for(int i = 0;i<26;i++){
        if(hash[i]> maxFreq){
            maxFreq= hash[i];
            maxFreqChar = i +'a';
        }

    }
    int index =0;
    while (maxFreq > 0 && index < s.size()){
        s[index] = maxFreqChar;
        maxFreq --;
        index += 2;
    }

    if (maxFreq != 0){
        return "";
    }
    hash[maxFreqChar - 'a'] =0;
    for(int i =0 ;i<26;i++){
        while (hash[i]>0){
            index = index>= s.size() ? 1 : index;
            s[index]= i+'a';
            hash[i]--;
            index += 2;
        }
    }
    return s;
   

}

int main(){
    string s = "aaabccdef";

    cout<<"The Output is : "<<reorganizeString(s)<<endl;
} 