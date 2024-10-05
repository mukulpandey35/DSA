#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<string>> groupAnagram(vector<string> strs)
{
    map<string, vector<string>> mp;

    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}

int main()
{
    vector<string> strs{"eat", "tea", "ate", "tan", "nat", "bat"};
    vector<vector<string>> ans = groupAnagram(strs);

    cout << "The Groups are: " << endl;
    for (const auto &group : ans)
    {
        for (const auto &word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}