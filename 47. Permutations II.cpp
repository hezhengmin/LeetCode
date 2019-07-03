class Solution {
   public:
    bool visit[100];
    vector<int> array;
    vector<vector<int>> answer;
    void dfs(vector<int>& nums, int index) {
        if (nums.size() == index) {
            answer.push_back(array);
            return;
        }
        int previous = 2147483647;
        for (int i = 0; i < nums.size(); i++) {
            if (!visit[i] && previous != nums[i]) {
                previous = nums[i];
                visit[i] = true;
                array.push_back(nums[i]);
                dfs(nums, index + 1);
                array.pop_back();
                visit[i] = false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(visit, 0, sizeof(visit));
        array.clear();
        dfs(nums, 0);
        return answer;
    }
};