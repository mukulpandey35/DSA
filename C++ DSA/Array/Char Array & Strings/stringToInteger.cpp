#include<iostream>
#include<algorithm>

using namespace std;
int myAtoi(string s){
    int num =0, i =0 ,sign = 1; // +ve
    while(s[i]==' '){
        i++;
    }
    if(i<s.size() && (s[i] =='-') || (s[i])=='+'){
        sign = s[i] == '+' ? 1 : -1;
        ++i;
    }

    while(i<s.size() && isdigit(s[i])){
        if(num > INT32_MAX /10|| (num == INT32_MAX / 10 && s[i]> '7')){
            return sign == -1 ? INT32_MIN : INT32_MAX;
        }
        num = num*10 + (s[i]-'0');
        ++i;
    }
    return num * sign;

}
int main(){
    string s = "   -72500MUku";
    int ans = myAtoi(s);

    cout<<"The Output is : " << ans << endl;
    
}