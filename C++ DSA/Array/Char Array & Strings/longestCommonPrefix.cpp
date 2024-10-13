#include <iostream>
#include <string>
#include <vector>

using namespace std;
string lgCnPx(vector<string> strs)
{
    string ans;
    int i = 0;
    while (true)
    {
        char curr_ch = 0;
        for (auto str : strs)
        {
            if (i >= str.size())
            {
                // out of bound
                curr_ch = 0;
                break;
            }

            // just started
            if (curr_ch == 0)
            {
                curr_ch = str[i];
            }
            else if (str[i] != curr_ch)
            {
                curr_ch = 0;
                break;
            }
        }
        if (curr_ch == 0)
        {
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    string common = lgCnPx(strs);
    cout << " The Output string is : " << common << endl;
}