class Solution {
   public:
    int maxArea(vector<int> &height) {
        int answer = 0;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            int temp = min(height[l], height[r]);
            answer = max(answer, (r - l) * temp);
            if (height[r] > height[l])
                l++;
            else
                r--;
        }
        return answer;
    }
};