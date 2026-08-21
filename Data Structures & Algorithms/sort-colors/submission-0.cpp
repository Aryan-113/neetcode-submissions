class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int w = 0;
        int b = nums.size() - 1;
        int r = 0;

        while (w <= b) {
            if (nums[w] == 1) {
                w++;
            } else if (nums[w] == 0) {
                swap(nums[w], nums[r]);
                r++;
                w++;
            } else {
                swap(nums[w], nums[b]);
                b--;
            }
        }
    }
};