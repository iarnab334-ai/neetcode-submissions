class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st; // stores indices, heights[st.top()] is increasing
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
            int curHeight = (i == n) ? 0 : heights[i];

            while (!st.empty() && heights[st.top()] > curHeight) {
                int height = heights[st.top()];
                st.pop();

                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }

        return maxArea;
    }
};
