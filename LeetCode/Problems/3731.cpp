// class Solution {
//    public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> res;
//         unordered_set<int> s;
//         s.insert(nums.begin(), nums.end());
//         int mini = nums[0], maxi = nums[0];
//         for (int i = 1; i < n; i++) {
//             mini = min(mini, nums[i]);
//             maxi = max(maxi, nums[i]);
//         }
//         for (int i = mini; i <= maxi; i++) {
//             if (s.find(i) == s.end()) {
//                 res.push_back(i);
//             }
//         }
//         return res;
//     }
// };
class Solution {
   public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        sort(nums.begin(), nums.end());
        set<int> s(nums.begin(), nums.end());
        int start = nums[0];
        int end = nums.back();
        for (int i = start + 1; i < end; i++) {
            if (s.count(i) == 0) {
                res.push_back(i);
            }
        }
        return res;
    }
};