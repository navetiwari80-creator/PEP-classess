#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;
vector<int> temp;

void solve(vector<int> &candidates, int target, int index)
{
    // If target becomes 0, store the combination
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }

    // If target becomes negative or all elements are checked
    if (target < 0 || index == candidates.size())
        return;

    // Include current element
    temp.push_back(candidates[index]);
    solve(candidates, target - candidates[index], index); // same index (reuse allowed)
    temp.pop_back();

    // Exclude current element
    solve(candidates, target, index + 1);
}

int main()
{
    int n, target;

    cout << "Enter number of candidates: ";
    cin >> n;

    vector<int> candidates(n);

    cout << "Enter the candidates: ";
    for (int i = 0; i < n; i++)
        cin >> candidates[i];

    cout << "Enter target: ";
    cin >> target;

    solve(candidates, target, 0);

    cout << "\nPossible Combinations are:\n";

    if (ans.empty())
    {
        cout << "No combination found.";
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}