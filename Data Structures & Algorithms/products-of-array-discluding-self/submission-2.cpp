class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());

        int forproduct = 1;
        for (int i = 0; i < nums.size(); i++){
            res[i] = forproduct;
            forproduct *= nums[i];
        }

        int backproduct = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            res[i] *= backproduct;
            backproduct *= nums[i];
        }

        return res;

    }
};
