class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        int ans = 0;

        /*
        [0, ans] = no duplicates.
        (ans, n) = may contain duplicates.
        */
        for (int itr = 1; itr < n; ++itr) {
            if (nums[ans] != nums[itr]) {
                nums[++ans] = nums[itr];
            }
        }

        return (n == 0 ? ans : ans + 1);
    }
};