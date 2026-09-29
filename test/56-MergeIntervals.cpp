#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int a = intervals[0][0];
    int b = intervals[0][1];

    for (int i = 0; i < intervals.size(); i++)
    {
        // merge
        if (intervals[i][0] <= b)
        {
            b = max(b, intervals[i][1]);
        }else
        {
            ans.push_back({a, b});

            a = intervals[i][0];
            b = intervals[i][1];
        }
        // insert

    }
    ans.push_back({a, b});


    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{" << ans[i][0] << ", " << ans[i][1] << "} ";
    }

    return 0;
}