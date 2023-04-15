class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n = pushed.size();

        int i = 0;
        int j = 0;
        while(i<n){
            st.push(pushed[i]);
            while(!st.empty() && j<n && st.top() == popped[j]){
                st.pop();
                j++;
            }
            i++;
        }
        return j == n;
    }
};
