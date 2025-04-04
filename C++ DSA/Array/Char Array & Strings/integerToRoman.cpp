#include <iostream>

using namespace std;

string intToRoman(int num)
{
    string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string ans = "";

    for (int i = 0; i < 13; i++)
    {
        while (num >= value[i])
        {
            ans += romanSymbols[i];
            num -= value[i];
        }
    }

    return ans;
}

int main()
{
    int num = 3564;

    cout << "The answer is : " << intToRoman(num) << endl;
}