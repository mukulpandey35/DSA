#include <iostream>
#include <vector>

using namespace std;
int findSqrt(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    int target = n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == target)
        {
            int ans = mid;
        }
        else if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = findSqrt(n);
    cout << ans;
    int precision = 10;
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final answer is : " << finalAns << endl;
    return 0;
}