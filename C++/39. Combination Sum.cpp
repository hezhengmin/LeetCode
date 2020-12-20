class Solution
{
public:
    vector<int> temp;
    vector<vector<int>> matrix;
    void dfs(vector<int> &candidates, int target, int position, int sum)
    {
        if (sum == target)
        {
            matrix.push_back(temp);
            return;
        }
        for (int i = position; i < candidates.size(); i++)
        {
            if (candidates[i] + sum <= target)
            {
                temp.push_back(candidates[i]);
                dfs(candidates, target, i, sum + candidates[i]);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        temp.clear();
        dfs(candidates, target, 0, 0);
        return matrix;
    }
};