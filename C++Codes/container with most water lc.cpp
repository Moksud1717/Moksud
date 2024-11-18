#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxarea(vector<int>&height){
        int maxArea = 0;
        int left = 0, right = height.size()-1;
        while(left<right){
            int h = min(height[left], height[right]);
            maxArea = max(maxArea, h*(right - left));

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};
int main(){
    Solution solution;
    vector<int>height = {1, 8, 6,2, 5, 4, 8, 3, 7};
    int result = solution.maxarea(height);
    cout << result << endl;
    return 0;
}
