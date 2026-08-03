class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        // forward pass: res[i] = product of all elements before i
        int forwardproduct = 1;
        for (int i = 0; i < n; i++) {
            res[i] = forwardproduct;
            forwardproduct *= nums[i];   // *= not +=
        }

        // backward pass: multiply res[i] by product of all elements after i
        int backwardproduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= backwardproduct;
            backwardproduct *= nums[i];
        }

        return res;
    }
};
