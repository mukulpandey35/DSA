#include <iostream>
#include <vector>

using namespace std;
int findPeak(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        
    }
    return s;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 10, 7, 8, 9};
    int ans = findPeak(arr);
    cout << ans << endl;
    return 0;
}