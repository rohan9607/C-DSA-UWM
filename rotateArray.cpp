#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr = nums;
        int size = nums.size();
            for (int i = 0; i < size; i++)
            {
                arr[(i + k) % size] = nums[i];
            }
            nums = arr;
            
            // Print

            for(auto element : nums){
                cout << element << "\n";
            }
    }
};



int main(){

    Solution s;
    vector<int> arr = {1,2,3,4,5,6,7};
    return 0;
}


