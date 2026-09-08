class Solution {
   public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        // if(n == 1){
        //     return nums[0];
        // }
        // vector<int>prod;
        // prod.push_back(nums[0]);
        // for(int i = 1; i < n; i++){
        //     if(nums[i] <= 0){
        //         prod.push_back(-1);
        //         prod.push_back(nums[++i]);
        //     }else{
        //         prod.push_back(prod[i-1] * nums[i]);
        //     }
        // }
        // int x = 0, currmax = prod[0];
        // int gmax = 0;
        // while(x < n){
        //     if(prod[x] >= currmax){
        //         currmax = prod[x];
        //     }else if(prod[x] == -1){
        //         gmax = currmax;
        //         currmax = 0;
        //     }
        //     x++;
        // }
        // if(currmax >= gmax){
        //     gmax = currmax;
        // }
        // return gmax;
        int maxi = nums[0], mini = nums[0], res = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] < 0) {
                swap(maxi, mini);
            }
            maxi = max(nums[i], maxi * nums[i]);
            mini = min(nums[i], mini * nums[i]);
            res = max(res, maxi);
        }
        return res;
    }
};