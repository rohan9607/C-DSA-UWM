#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size(), i = 0, j = 1, counter = 0;

        while (j < size)
            {
             if (nums[i] != nums[j])
                {
                    nums[i + 1] = nums[j];
                    i++;
                }  
                j++;             
            }
            

            for(auto e : nums){
                cout << e << " " << "\n";
            }

            return 0;
    }

};

int main(){
    Solution s;
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    s.removeDuplicates(arr);
    return 0;
}